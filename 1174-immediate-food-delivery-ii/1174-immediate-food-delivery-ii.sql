SELECT ROUND(
    SUM(CASE WHEN d.order_date = d.customer_pref_delivery_date THEN 1 ELSE 0 END)
    /COUNT(d.customer_id)*100
,2) AS immediate_percentage
FROM Delivery d 
INNER JOIN(
    SELECT customer_id ,MIN(order_date) AS first_order_date
    FROM Delivery
    GROUP BY customer_id
) first_order
ON d.customer_id = first_order.customer_id
AND d.order_date = first_order.first_order_date;