-- 상반기 아이스크림 총주문량이 3000보다 높으면서 아이스크림의 주 성분 = 과일인 아이스크림의 맛을 총주문량이 큰 순서대로 조회
SELECT fh.FLAVOR
FROM FIRST_HALF fh, ICECREAM_INFO ii
WHERE fh.FLAVOR = ii.FLAVOR AND fh.TOTAL_ORDER>3000 AND ii.INGREDIENT_TYPE='fruit_based'
ORDER BY total_order DESC;