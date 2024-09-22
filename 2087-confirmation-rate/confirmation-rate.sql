SELECT SIGNUPS.USER_ID AS user_id, round(avg(if(confirmations.action="confirmed",1,0)),2) as confirmation_rate
FROM SIGNUPS
LEFT JOIN CONFIRMATIONS 
ON SIGNUPS.USER_ID = CONFIRMATIONS.USER_ID
GROUP BY USER_ID;
