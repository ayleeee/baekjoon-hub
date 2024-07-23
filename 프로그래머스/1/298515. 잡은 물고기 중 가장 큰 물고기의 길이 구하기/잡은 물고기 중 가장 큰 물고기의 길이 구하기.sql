-- 가장 큰 물고기의 길이를 'cm'을 붙여 출력하는 SQL
-- 컬럼명 : MAX_LENGTH

SELECT CONCAT(MAX(LENGTH), 'cm') as MAX_LENGTH
FROM FISH_INFO;