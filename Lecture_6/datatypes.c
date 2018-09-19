//Data Types
//-------------------------- 
//int		32	bits
//short int 	16	bits
//long int	64	bits
//char		8	bits
//
//
//Number representation
//
//Unsigned number
// -- -- -- -- -- -- -- -- -- --
//|  |  |  |  |  |  |  |  |  |  |
// -- -- -- -- -- -- -- -- -- --      
//  ^ Sign bit
//    ^  ^  ^  ^  ^  ^  ^  ^  ^ 
//      USABLE BITs
//
// Formula
//	usable bits = 2**n - 1
//
//Exponents
// 
// Float (32 bits)
// -- -- -- -- -- -- -- -- -- -- -- --
//|s(1)| exponent(8) | mantissa (23)  |
// -- -- -- -- -- -- -- -- -- -- -- --   
//
//	Range ~ -10^38, 10^38
//Double (64 bits)
//
// -- -- -- -- -- -- -- -- -- -- -- --
//|s(1)| exponent(11) | mantissa (52) |
// -- -- -- -- -- -- -- -- -- -- -- --  
//
//	53 digits of accuracy
//
//	Range ~ -10^308 , 10^108
//
//Character Type
// 
