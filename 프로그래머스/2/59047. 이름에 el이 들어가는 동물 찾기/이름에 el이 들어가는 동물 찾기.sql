-- 'el' 이 들어가는 것 
SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE ANIMAL_TYPE = 'Dog' and NAME LIKE '%el%'
ORDER BY NAME;