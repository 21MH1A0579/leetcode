SELECT 
    contest_id, 
    ROUND((COUNT( user_id) / (SELECT COUNT(*) FROM USERS)) * 100, 2) AS percentage
FROM 
    REGISTER
GROUP BY 
    contest_id
ORDER BY 
    percentage DESC, 
    contest_id ASC;
