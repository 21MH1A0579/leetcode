# Write your MySQL query statement below
SELECT CUSTOMER_ID, COUNT(CUSTOMER_ID) AS count_no_trans  FROM VISITS
LEFT JOIN Transactions 
ON VISITS.VISIT_ID=Transactions.VISIT_ID WHERE Transactions.VISIT_ID IS NULL GROUP BY CUSTOMER_ID;