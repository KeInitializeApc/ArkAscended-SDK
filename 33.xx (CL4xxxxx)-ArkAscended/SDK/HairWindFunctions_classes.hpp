#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass HairWindFunctions.HairWindFunctions_C
class UHairWindFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHairWindFunctions_C* GetDefaultObj();

	float CalculateWind(double* PlayerSpeed, double* WindFrequency, double* GameSeconds, double* WindAmount, const struct FVector& GlobalWindDirection, double GlobalWindIntensity, double* MinWindFrequency, double* MaxWindFrequency, double* MinWindIntensity, double* MinRainyIntensity, double* MaxRainyIntensity, class UObject* __WorldContext, struct FVector* Wind, struct FVector* WindZ, double* WindFreq, double* WindAlpha, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double* CallFunc_Sin_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double* CallFunc_Sin_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1);
};

}


