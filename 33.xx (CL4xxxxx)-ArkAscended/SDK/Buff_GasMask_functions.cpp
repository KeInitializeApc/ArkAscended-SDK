#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_GasMask.Buff_GasMask_C
// (Actor)

class UClass* ABuff_GasMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_GasMask_C");

	return Clss;
}


// Buff_GasMask_C Buff_GasMask.Default__Buff_GasMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_GasMask_C* ABuff_GasMask_C::GetDefaultObj()
{
	static class ABuff_GasMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_GasMask_C*>(ABuff_GasMask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_GasMask.Buff_GasMask_C.AllowPostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_AllowPostProcessEffect_ReturnValue                      (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPersonCamera_ReturnValue                         (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_GasMask_C::AllowPostProcessEffect(class APawn* CallFunc_GetInstigator_ReturnValue, bool* CallFunc_IsFirstPersonCamera_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_GasMask_C", "AllowPostProcessEffect");

	Params::ABuff_GasMask_C_AllowPostProcessEffect_Params Parms{};

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsFirstPersonCamera_ReturnValue != nullptr)
		*CallFunc_IsFirstPersonCamera_ReturnValue = Parms.CallFunc_IsFirstPersonCamera_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_GasMask.Buff_GasMask_C.BuffAdjustDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, ExportObject, Transient, Config, EditConst, SubobjectReference)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      TheDamageCauser                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      TheDamgeType                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsDmg_Type_Melee_Torp_Poison_Large_No_FF (BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_retVal_ImplicitCast                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float ABuff_GasMask_C::BuffAdjustDamage(const struct FHitResult& HitInfo, class AController** EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType, double* RetVal, class UClass* K2Node_ClassDynamicCast_AsDmg_Type_Melee_Torp_Poison_Large_No_FF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_GasMask_C", "BuffAdjustDamage");

	Params::ABuff_GasMask_C_BuffAdjustDamage_Params Parms{};

	Parms.HitInfo = HitInfo;
	Parms.TheDamageCauser = TheDamageCauser;
	Parms.TheDamgeType = TheDamgeType;
	Parms.K2Node_ClassDynamicCast_AsDmg_Type_Melee_Torp_Poison_Large_No_FF = K2Node_ClassDynamicCast_AsDmg_Type_Melee_Torp_Poison_Large_No_FF;

	UObject::ProcessEvent(Func, &Parms);

	if (EventInstigator != nullptr)
		*EventInstigator = Parms.EventInstigator;

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	return Parms.ReturnValue;

}


// Function Buff_GasMask.Buff_GasMask_C.BPPreventAddingOtherBuff
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AnotherBuffClass                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsBuff_Base_Gas_Maskable                 (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsBuff_Base_Disease_Low_Gas_Maskable     (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)

bool ABuff_GasMask_C::BPPreventAddingOtherBuff(class UClass** AnotherBuffClass, bool* RetVal, class UClass* K2Node_ClassDynamicCast_AsBuff_Base_Gas_Maskable, class UClass* K2Node_ClassDynamicCast_AsBuff_Base_Disease_Low_Gas_Maskable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_GasMask_C", "BPPreventAddingOtherBuff");

	Params::ABuff_GasMask_C_BPPreventAddingOtherBuff_Params Parms{};

	Parms.K2Node_ClassDynamicCast_AsBuff_Base_Gas_Maskable = K2Node_ClassDynamicCast_AsBuff_Base_Gas_Maskable;
	Parms.K2Node_ClassDynamicCast_AsBuff_Base_Disease_Low_Gas_Maskable = K2Node_ClassDynamicCast_AsBuff_Base_Disease_Low_Gas_Maskable;

	UObject::ProcessEvent(Func, &Parms);

	if (AnotherBuffClass != nullptr)
		*AnotherBuffClass = Parms.AnotherBuffClass;

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	return Parms.ReturnValue;

}

}


