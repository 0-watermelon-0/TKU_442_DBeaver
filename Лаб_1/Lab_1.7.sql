SELECT  "AddressID"  ,"AddressLine1" ,"AddressLine2" ,"City",
COALESCE ("AddressLine2", 'NO') as "AddressLine2" 
FROM "Person"."Address"  ; 
