

**Tool Practice – Advanced SQL Queries**



Objective: To practice SQL concepts for data aggregation and analysis.



Key Learnings \& Outcomes:



Practiced queries using GROUP BY and aggregate functions:



SELECT Region, SUM(Sales) FROM Orders GROUP BY Region; → shows total sales by region.



SELECT Department, AVG(Salary) FROM Employees GROUP BY Department; → calculates average salary per department.



SELECT CustomerID FROM Orders WHERE Amount > (SELECT AVG(Amount) FROM Orders); → identifies customers who spent above average.



Learned how subqueries can be nested to answer complex business questions.



Understood that advanced SQL helps analysts generate insights beyond simple reporting.



