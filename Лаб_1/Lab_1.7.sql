--Показать поля AddressID, AddressLine1, AddressLine2, City из таблицы Person.[Address]. 
--Заменить неизвестное значение в поле AddressLine2 на 'NO'. Названия полей оставить без изменений
SELECT  "AddressID"  ,"AddressLine1" ,"AddressLine2" ,"City",
COALESCE ("AddressLine2", 'NO') as "AddressLine2" 
FROM "Person"."Address"  ; 
