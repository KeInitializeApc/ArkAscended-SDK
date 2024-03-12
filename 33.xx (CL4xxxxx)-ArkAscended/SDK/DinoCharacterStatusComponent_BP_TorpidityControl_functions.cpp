#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C
// (None)

class UClass* UDinoCharacterStatusComponent_BP_TorpidityControl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoCharacterStatusComponent_BP_TorpidityControl_C");

	return Clss;
}


// DinoCharacterStatusComponent_BP_TorpidityControl_C DinoCharacterStatusComponent_BP_TorpidityControl.Default__DinoCharacterStatusComponent_BP_TorpidityControl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoCharacterStatusComponent_BP_TorpidityControl_C* UDinoCharacterStatusComponent_BP_TorpidityControl_C::GetDefaultObj()
{
	static class UDinoCharacterStatusComponent_BP_TorpidityControl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoCharacterStatusComponent_BP_TorpidityControl_C*>(UDinoCharacterStatusComponent_BP_TorpidityControl_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.BPAdjustStatusValueModification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalCharacterStatusValueValueType                                                        (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Amount                                                           (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      DamageTypeClass                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// bool                               bManualModification                                              (Edit, ConstParm, BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             K2Node_VariableSet_retVal_ImplicitCast                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UDinoCharacterStatusComponent_BP_TorpidityControl_C::BPAdjustStatusValueModification(enum class EPrimalCharacterStatusValue* ValueType, float* Amount, class UClass** DamageTypeClass, bool bManualModification, double* RetVal, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DinoCharacterStatusComponent_BP_TorpidityControl_C", "BPAdjustStatusValueModification");

	Params::UDinoCharacterStatusComponent_BP_TorpidityControl_C_BPAdjustStatusValueModification_Params Parms{};

	Parms.bManualModification = bManualModification;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueType != nullptr)
		*ValueType = Parms.ValueType;

	if (Amount != nullptr)
		*Amount = Parms.Amount;

	if (DamageTypeClass != nullptr)
		*DamageTypeClass = Parms.DamageTypeClass;

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


