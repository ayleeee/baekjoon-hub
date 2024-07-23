-- 자동차 종류가 'SUV'인 자동차들의 평균 일일 대여 요금을 출력
-- 평균 일일 대여 요금은 소수 첫 번째 자리에서 반올림
-- 반올림 : ROUND(값, 자릿수) 
-- // 자릿수 0 : 반올림하여 1의 자리까지 표시 // 자릿수 N : 소숫점 아래 N째 자리까지 반올림 // 자릿수 -N : 반올림하여 10의 N승 자리까지
-- 컬럼명은 AVERAGE_FEE
SELECT ROUND(AVG(DAILY_FEE),0) as AVERAGE_FEE
FROM CAR_RENTAL_COMPANY_CAR
WHERE CAR_TYPE='SUV';
