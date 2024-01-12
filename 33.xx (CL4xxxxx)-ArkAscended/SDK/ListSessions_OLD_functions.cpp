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
// class USizeBox*                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USizeBox* UListSessions_OLD_C::GetSizeboxForExtraHandheldScaling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "GetSizeboxForExtraHandheldScaling");

	Params::UListSessions_OLD_C_GetSizeboxForExtraHandheldScaling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListSessions_OLD.ListSessions_OLD_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UListSessions_OLD_C::GetWidgetToScaleForHandheld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "GetWidgetToScaleForHandheld");

	Params::UListSessions_OLD_C_GetWidgetToScaleForHandheld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListSessions_OLD.ListSessions_OLD_C.BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)

bool UListSessions_OLD_C::ExecuteUbergraph_ListSessions_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "ExecuteUbergraph_ListSessions_OLD");

	Params::UListSessions_OLD_C_ExecuteUbergraph_ListSessions_OLD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


