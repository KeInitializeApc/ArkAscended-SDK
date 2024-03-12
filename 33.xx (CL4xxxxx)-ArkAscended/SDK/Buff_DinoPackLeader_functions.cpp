#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DinoPackLeader.Buff_DinoPackLeader_C
// (Actor)

class UClass* ABuff_DinoPackLeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DinoPackLeader_C");

	return Clss;
}


// Buff_DinoPackLeader_C Buff_DinoPackLeader.Default__Buff_DinoPackLeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DinoPackLeader_C* ABuff_DinoPackLeader_C::GetDefaultObj()
{
	static class ABuff_DinoPackLeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DinoPackLeader_C*>(ABuff_DinoPackLeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.BuffTickServer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_DinoPackLeader_C::BuffTickServer(bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoPackLeader_C", "BuffTickServer");

	Params::ABuff_DinoPackLeader_C_BuffTickServer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ABuff_DinoPackLeader_C::ReceiveTick(float* DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoPackLeader_C", "ReceiveTick");

	Params::ABuff_DinoPackLeader_C_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABuff_DinoPackLeader_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoPackLeader_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ExecuteUbergraph_Buff_DinoPackLeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

float ABuff_DinoPackLeader_C::ExecuteUbergraph_Buff_DinoPackLeader(int32* EntryPoint, float K2Node_Event_DeltaSeconds, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, struct FLinearColor* K2Node_MakeStruct_LinearColor, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoPackLeader_C", "ExecuteUbergraph_Buff_DinoPackLeader");

	Params::ABuff_DinoPackLeader_C_ExecuteUbergraph_Buff_DinoPackLeader_Params Parms{};

	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_MakeStruct_LinearColor != nullptr)
		*K2Node_MakeStruct_LinearColor = std::move(Parms.K2Node_MakeStruct_LinearColor);

	return Parms.ReturnValue;

}

}


