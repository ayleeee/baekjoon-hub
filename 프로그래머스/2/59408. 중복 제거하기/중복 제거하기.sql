-- 동물 보호소에 들어온 동물의 이름
-- 이때 이름이 NULL인 경우 집계 X, 중복 X
SELECT COUNT(DISTINCT NAME) as count
FROM ANIMAL_INS
WHERE NAME IS NOT NULL;