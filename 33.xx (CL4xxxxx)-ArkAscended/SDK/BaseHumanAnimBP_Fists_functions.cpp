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
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

bool UBaseHumanAnimBP_Fists_C::UpdateLayeringValues(bool CallFunc_BooleanAND_ReturnValue, double K2Node_VariableSet_Layering_L_Hand_ImplicitCast, double* K2Node_VariableSet_Layering_Spine_ImplicitCast, double* K2Node_VariableSet_Layering_L_Arm_ImplicitCast, double* K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double* K2Node_VariableSet_Layering_R_Arm_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_Fists_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_Fists_C_UpdateLayeringValues_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_VariableSet_Layering_L_Hand_ImplicitCast = K2Node_VariableSet_Layering_L_Hand_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_Layering_Spine_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_Spine_ImplicitCast = Parms.K2Node_VariableSet_Layering_Spine_ImplicitCast;

	if (K2Node_VariableSet_Layering_L_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_L_Arm_ImplicitCast = Parms.K2Node_VariableSet_Layering_L_Arm_ImplicitCast;

	if (K2Node_VariableSet_Layering_R_Hand_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_R_Hand_ImplicitCast = Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast;

	if (K2Node_VariableSet_Layering_R_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_R_Arm_ImplicitCast = Parms.K2Node_VariableSet_Layering_R_Arm_ImplicitCast;

	return Parms.ReturnValue;

}

}


