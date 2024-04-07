#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Female_Hair_Mohawk_Long_AnimBP.Female_Hair_Mohawk_Long_AnimBP_C
// (None)

class UClass* UFemale_Hair_Mohawk_Long_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Female_Hair_Mohawk_Long_AnimBP_C");

	return Clss;
}


// Female_Hair_Mohawk_Long_AnimBP_C Female_Hair_Mohawk_Long_AnimBP.Default__Female_Hair_Mohawk_Long_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFemale_Hair_Mohawk_Long_AnimBP_C* UFemale_Hair_Mohawk_Long_AnimBP_C::GetDefaultObj()
{
	static class UFemale_Hair_Mohawk_Long_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFemale_Hair_Mohawk_Long_AnimBP_C*>(UFemale_Hair_Mohawk_Long_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Female_Hair_Mohawk_Long_AnimBP.Female_Hair_Mohawk_Long_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void UFemale_Hair_Mohawk_Long_AnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Mohawk_Long_AnimBP_C", "AnimGraph");

	Params::UFemale_Hair_Mohawk_Long_AnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Female_Hair_Mohawk_Long_AnimBP.Female_Hair_Mohawk_Long_AnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UFemale_Hair_Mohawk_Long_AnimBP_C::BlueprintThreadSafeUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Mohawk_Long_AnimBP_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UFemale_Hair_Mohawk_Long_AnimBP_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Female_Hair_Mohawk_Long_AnimBP.Female_Hair_Mohawk_Long_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFemale_Hair_Mohawk_Long_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Mohawk_Long_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Female_Hair_Mohawk_Long_AnimBP.Female_Hair_Mohawk_Long_AnimBP_C.ExecuteUbergraph_Female_Hair_Mohawk_Long_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void UFemale_Hair_Mohawk_Long_AnimBP_C::ExecuteUbergraph_Female_Hair_Mohawk_Long_AnimBP(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Mohawk_Long_AnimBP_C", "ExecuteUbergraph_Female_Hair_Mohawk_Long_AnimBP");

	Params::UFemale_Hair_Mohawk_Long_AnimBP_C_ExecuteUbergraph_Female_Hair_Mohawk_Long_AnimBP_Params Parms{};

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


