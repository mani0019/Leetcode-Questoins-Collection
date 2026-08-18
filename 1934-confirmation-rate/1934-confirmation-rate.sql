# Write your MySQL query statement below
SELECT
    Signups.user_id ,
    ROUND(COALESCE(
        sum(case 
        when Confirmations.action = 'confirmed' then 1  else 0 
        end )/ nullif(count(Confirmations.action ), 0),0
    ), 2 ) as confirmation_rate 
FROM Signups
LEFT JOIN Confirmations
    ON Signups.user_id = Confirmations.user_id
GROUP BY Signups.user_id;