# Write your MySQL query statement below
###unn authoor ka id jinhone apne khud ke article ko view kiya hai###
SELECT DISTINCT author_id as id
FROM Views
WHERE author_id=viewer_id
ORDER BY author_id