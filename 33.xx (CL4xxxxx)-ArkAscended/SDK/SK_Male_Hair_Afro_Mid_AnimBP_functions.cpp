#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Male_Hair_Afro_Mid_AnimBP.SK_Male_Hair_Afro_Mid_AnimBP_C
// (None)

class UClass* USK_Male_Hair_Afro_Mid_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Male_Hair_Afro_Mid_AnimBP_C");

	return Clss;
}


// SK_Male_Hair_Afro_Mid_AnimBP_C SK_Male_Hair_Afro_Mid_AnimBP.Default__SK_Male_Hair_Afro_Mid_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Male_Hair_Afro_Mid_AnimBP_C* USK_Male_Hair_Afro_Mid_AnimBP_C::GetDefaultObj()
{
	static class USK_Male_Hair_Afro_Mid_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Male_Hair_Afro_Mid_AnimBP_C*>(USK_Male_Hair_Afro_Mid_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Male_Hair_Afro_Mid_AnimBP.SK_Male_Hair_Afro_Mid_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void USK_Male_Hair_Afro_Mid_AnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Male_Hair_Afro_Mid_AnimBP_C", "AnimGraph");

	Params::USK_Male_Hair_Afro_Mid_AnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_Male_Hair_Afro_Mid_AnimBP.SK_Male_Hair_Afro_Mid_AnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USK_Male_Hair_Afro_Mid_AnimBP_C::BlueprintThreadSafeUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Male_Hair_Afro_Mid_AnimBP_C", "BlueprintThreadSafeUpdateAnimation");

	Params::USK_Male_Hair_Afro_Mid_AnimBP_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SK_Male_Hair_Afro_Mid_AnimBP.SK_Male_Hair_Afro_Mid_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_Male_Hair_Afro_Mid_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Male_Hair_Afro_Mid_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Male_Hair_Afro_Mid_AnimBP.SK_Male_Hair_Afro_Mid_AnimBP_C.ExecuteUbergraph_SK_Male_Hair_Afro_Mid_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void USK_Male_Hair_Afro_Mid_AnimBP_C::ExecuteUbergraph_SK_Male_Hair_Afro_Mid_AnimBP(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Male_Hair_Afro_Mid_AnimBP_C", "ExecuteUbergraph_SK_Male_Hair_Afro_Mid_AnimBP");

	Params::USK_Male_Hair_Afro_Mid_AnimBP_C_ExecuteUbergraph_SK_Male_Hair_Afro_Mid_AnimBP_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}

}


