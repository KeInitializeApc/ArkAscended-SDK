#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C
// (None)

class UClass* UBaseHumanAnimBP_Fists_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseHumanAnimBP_Fists_C");

	return Clss;
}


// BaseHumanAnimBP_Fists_C BaseHumanAnimBP_Fists.Default__BaseHumanAnimBP_Fists_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseHumanAnimBP_Fists_C* UBaseHumanAnimBP_Fists_C::GetDefaultObj()
{
	static class UBaseHumanAnimBP_Fists_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseHumanAnimBP_Fists_C*>(UBaseHumanAnimBP_Fists_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_Fists_C::UpdateLayeringValues(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, double* K2Node_VariableSet_Layering_Spine_ImplicitCast, double* K2Node_VariableSet_Layering_L_Arm_ImplicitCast, double K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double* K2Node_VariableSet_Layering_R_Arm_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_Fists_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_Fists_C_UpdateLayeringValues_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast = K2Node_VariableSet_Layering_R_Hand_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (K2Node_VariableSet_Layering_Spine_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_Spine_ImplicitCast = Parms.K2Node_VariableSet_Layering_Spine_ImplicitCast;

	if (K2Node_VariableSet_Layering_L_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_L_Arm_ImplicitCast = Parms.K2Node_VariableSet_Layering_L_Arm_ImplicitCast;

	if (K2Node_VariableSet_Layering_R_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_R_Arm_ImplicitCast = Parms.K2Node_VariableSet_Layering_R_Arm_ImplicitCast;

	return Parms.ReturnValue;

}

}


