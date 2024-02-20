#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ListSessions_OLD.ListSessions_OLD_C
// (None)

class UClass* UListSessions_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListSessions_OLD_C");

	return Clss;
}


// ListSessions_OLD_C ListSessions_OLD.Default__ListSessions_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListSessions_OLD_C* UListSessions_OLD_C::GetDefaultObj()
{
	static class UListSessions_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListSessions_OLD_C*>(UListSessions_OLD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListSessions_OLD.ListSessions_OLD_C.GetSizeboxForExtraHandheldScaling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListSessions_OLD_C::GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "GetSizeboxForExtraHandheldScaling");

	Params::UListSessions_OLD_C_GetSizeboxForExtraHandheldScaling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListSessions_OLD.ListSessions_OLD_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListSessions_OLD_C::GetWidgetToScaleForHandheld(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "GetWidgetToScaleForHandheld");

	Params::UListSessions_OLD_C_GetWidgetToScaleForHandheld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListSessions_OLD.ListSessions_OLD_C.BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UListSessions_OLD_C::BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UListSessions_OLD_C_BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListSessions_OLD.ListSessions_OLD_C.BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UListSessions_OLD_C::BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UListSessions_OLD_C_BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListSessions_OLD.ListSessions_OLD_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UListSessions_OLD_C::BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UListSessions_OLD_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListSessions_OLD.ListSessions_OLD_C.ExecuteUbergraph_ListSessions_OLD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

int32 UListSessions_OLD_C::ExecuteUbergraph_ListSessions_OLD(bool* K2Node_ComponentBoundEvent_bIsChecked, bool* K2Node_ComponentBoundEvent_bIsChecked_2, bool* K2Node_ComponentBoundEvent_bIsChecked_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "ExecuteUbergraph_ListSessions_OLD");

	Params::UListSessions_OLD_C_ExecuteUbergraph_ListSessions_OLD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_ComponentBoundEvent_bIsChecked != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked = Parms.K2Node_ComponentBoundEvent_bIsChecked;

	if (K2Node_ComponentBoundEvent_bIsChecked_2 != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked_2 = Parms.K2Node_ComponentBoundEvent_bIsChecked_2;

	if (K2Node_ComponentBoundEvent_bIsChecked_1 != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked_1 = Parms.K2Node_ComponentBoundEvent_bIsChecked_1;

	return Parms.ReturnValue;

}

}


