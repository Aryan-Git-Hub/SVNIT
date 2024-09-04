#include<stdio.h>

int main() {
    int m_cs, m_eng, m_maths, m_phy, m_chem;

    printf("Enter your marks in CS: ");
    scanf("%d", &m_cs);

    printf("Enter your marks in English: ");
    scanf("%d", &m_eng);

    printf("Enter your marks in Maths: ");
    scanf("%d", &m_maths);
    
    printf("Enter your marks in Physics: ");
    scanf("%d", &m_phy);

    printf("Enter your marks in Chemistry: ");
    scanf("%d", &m_chem);

    int total = m_eng+m_maths+m_cs+m_phy+m_chem;
    float percentage = total/5;

    printf("Percentage: %f", percentage);

    return 0;
}