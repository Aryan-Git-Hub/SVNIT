import re

def tokenize(text):
    # Define regex patterns
    patterns = {
        'punctuation': r'[।,!?;:()"\']',
        'date': r'\b\d{1,2}/\d{1,2}/\d{2,4}\b',
        'url': r'https?://[^\s]+',
        'email': r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b',
        'number': r'\b\d{1,3}(,\d{3})*(\.\d+)?\b',
        'username': r'@\w+',
        'hindi_word': r'[\u0900-\u097F]+'
    }

    # Combine all patterns into one
    combined_pattern = '|'.join(f'(?P<{key}>{pattern})' for key, pattern in patterns.items())

    # Tokenize text
    tokens = []
    for match in re.finditer(combined_pattern, text):
        for key, value in match.groupdict().items():
            if value:
                tokens.append((key, value))
    
    return tokens

# Example usage
text = "यह एक उदाहरण है। @user123 ने 12/10/2021 को https://example.com पर ईमेल भेजा। संख्या 33.15 और 3,22,243 भी शामिल हैं।"
tokens = tokenize(text)
for token in tokens:
    print(token)