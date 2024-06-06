SELECT  "PhoneNumber"  ,"BusinessEntityID" , "PhoneNumberTypeID" 
FROM "Person"."PersonPhone" 
WHERE "PhoneNumberTypeID" in ( 1, 3) ;
