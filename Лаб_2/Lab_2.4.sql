--4)	Найти пол (Gender) из таблицы HumanResources.Employee, 
--где количество людей, принятых до 2008 года, имеют суммарное количество 
--часов отдыха равное 82, не учитывать пустые значения. 
SELECT DISTINCT "Gender"
FROM "HumanResources"."Employee"
WHERE "HireDate" < '2008-01-01' AND "VacationHours" = '82';
