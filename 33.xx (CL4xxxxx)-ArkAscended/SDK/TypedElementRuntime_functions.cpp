#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// (None)

class UClass* UTypedElementSelectionSetLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionSetLibrary");

	return Clss;
}


// TypedElementSelectionSetLibrary TypedElementRuntime.Default__TypedElementSelectionSetLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementSelectionSetLibrary* UTypedElementSelectionSetLibrary::GetDefaultObj()
{
	static class UTypedElementSelectionSetLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementSelectionSetLibrary*>(UTypedElementSelectionSetLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FScriptTypedElementListProxyElementList                                                      (OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSetLibrary::SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SetSelectionFromList");

	Params::UTypedElementSelectionSetLibrary_SetSelectionFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FScriptTypedElementListProxyElementList                                                      (OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSetLibrary::SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SelectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_SelectElementsFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FScriptTypedElementListProxyReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionNormalizationOptions UTypedElementSelectionSetLibrary::GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedSelection");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FScriptTypedElementListProxyElementList                                                      (OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FScriptTypedElementListProxyReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionNormalizationOptions UTypedElementSelectionSetLibrary::GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FScriptTypedElementListProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedElementList");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FScriptTypedElementListProxyElementList                                                      (OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSetLibrary::DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy* ElementList, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "DeselectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementSelectionSet
// (None)

class UClass* UTypedElementSelectionSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionSet");

	return Clss;
}


// TypedElementSelectionSet TypedElementRuntime.Default__TypedElementSelectionSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementSelectionSet* UTypedElementSelectionSet::GetDefaultObj()
{
	static class UTypedElementSelectionSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementSelectionSet*>(UTypedElementSelectionSet::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::SetSelection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SetSelection");

	Params::UTypedElementSelectionSet_SetSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::SelectElements(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElements");

	Params::UTypedElementSelectionSet_SelectElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::SelectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElement");

	Params::UTypedElementSelectionSet_SelectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionSetStateInSelectionState                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FTypedElementSelectionSetState UTypedElementSelectionSet::RestoreSelectionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "RestoreSelectionState");

	Params::UTypedElementSelectionSet_RestoreSelectionState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void UTypedElementSelectionSet::OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnPreChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params Parms{};

	Parms.SelectionSet = SelectionSet;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void UTypedElementSelectionSet::OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params Parms{};

	Parms.SelectionSet = SelectionSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FScriptTypedElementHandle>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::K2_GetSelectedElementHandles(const TArray<struct FScriptTypedElementHandle>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "K2_GetSelectedElementHandles");

	Params::UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementIsSelectedOptions UTypedElementSelectionSet::IsElementSelected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "IsElementSelected");

	Params::UTypedElementSelectionSet_IsElementSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::HasSelectedObjects(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedObjects");

	Params::UTypedElementSelectionSet_HasSelectedObjects_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::HasSelectedElements(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedElements");

	Params::UTypedElementSelectionSet_HasSelectedElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::GetTopSelectedObject(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetTopSelectedObject");

	Params::UTypedElementSelectionSet_GetTopSelectedObject_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ETypedElementSelectionMethod UTypedElementSelectionSet::GetSelectionElement(const struct FScriptTypedElementHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectionElement");

	Params::UTypedElementSelectionSet_GetSelectionElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::GetSelectedObjects(const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectedObjects");

	Params::UTypedElementSelectionSet_GetSelectedObjects_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UTypedElementSelectionSet::GetNumSelectedElements(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetNumSelectedElements");

	Params::UTypedElementSelectionSet_GetNumSelectedElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTypedElementSelectionSetStateReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UTypedElementSelectionSet::GetCurrentSelectionState(const struct FTypedElementSelectionSetState& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetCurrentSelectionState");

	Params::UTypedElementSelectionSet_GetCurrentSelectionState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::GetBottomSelectedObject(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetBottomSelectedObject");

	Params::UTypedElementSelectionSet_GetBottomSelectedObject_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::DeselectElements(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElements");

	Params::UTypedElementSelectionSet_DeselectElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::DeselectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElement");

	Params::UTypedElementSelectionSet_DeselectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::CountSelectedObjects(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedObjects");

	Params::UTypedElementSelectionSet_CountSelectedObjects_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UTypedElementSelectionSet::CountSelectedElements(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedElements");

	Params::UTypedElementSelectionSet_CountSelectedElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::ClearSelection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "ClearSelection");

	Params::UTypedElementSelectionSet_ClearSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::CanSelectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanSelectElement");

	Params::UTypedElementSelectionSet_CanSelectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions UTypedElementSelectionSet::CanDeselectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanDeselectElement");

	Params::UTypedElementSelectionSet_CanDeselectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FScriptTypedElementHandle UTypedElementSelectionSet::AllowSelectionModifiers(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "AllowSelectionModifiers");

	Params::UTypedElementSelectionSet_AllowSelectionModifiers_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementAssetDataInterface
// (None)

class UClass* ITypedElementAssetDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementAssetDataInterface");

	return Clss;
}


// TypedElementAssetDataInterface TypedElementRuntime.Default__TypedElementAssetDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementAssetDataInterface* ITypedElementAssetDataInterface::GetDefaultObj()
{
	static class ITypedElementAssetDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementAssetDataInterface*>(ITypedElementAssetDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITypedElementAssetDataInterface::GetAssetData(const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAssetData");

	Params::ITypedElementAssetDataInterface_GetAssetData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FAssetData>          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITypedElementAssetDataInterface::GetAllReferencedAssetDatas(const TArray<struct FAssetData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAllReferencedAssetDatas");

	Params::ITypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementHierarchyInterface
// (None)

class UClass* ITypedElementHierarchyInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementHierarchyInterface");

	return Clss;
}


// TypedElementHierarchyInterface TypedElementRuntime.Default__TypedElementHierarchyInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementHierarchyInterface* ITypedElementHierarchyInterface::GetDefaultObj()
{
	static class ITypedElementHierarchyInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementHierarchyInterface*>(ITypedElementHierarchyInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowCreate                                                     (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool ITypedElementHierarchyInterface::GetParentElement(const struct FScriptTypedElementHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetParentElement");

	Params::ITypedElementHierarchyInterface_GetParentElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FScriptTypedElementHandle>OutElementHandles                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bAllowCreate                                                     (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool ITypedElementHierarchyInterface::GetChildElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetChildElements");

	Params::ITypedElementHierarchyInterface_GetChildElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementObjectInterface
// (None)

class UClass* ITypedElementObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementObjectInterface");

	return Clss;
}


// TypedElementObjectInterface TypedElementRuntime.Default__TypedElementObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementObjectInterface* ITypedElementObjectInterface::GetDefaultObj()
{
	static class ITypedElementObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementObjectInterface*>(ITypedElementObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITypedElementObjectInterface::GetObjectClass(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObjectClass");

	Params::ITypedElementObjectInterface_GetObjectClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITypedElementObjectInterface::GetObject(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObject");

	Params::ITypedElementObjectInterface_GetObject_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementSelectionInterface
// (None)

class UClass* ITypedElementSelectionInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionInterface");

	return Clss;
}


// TypedElementSelectionInterface TypedElementRuntime.Default__TypedElementSelectionInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementSelectionInterface* ITypedElementSelectionInterface::GetDefaultObj()
{
	static class ITypedElementSelectionInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementSelectionInterface*>(ITypedElementSelectionInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions ITypedElementSelectionInterface::SelectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "SelectElement");

	Params::ITypedElementSelectionInterface_SelectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementIsSelectedOptions ITypedElementSelectionInterface::IsElementSelected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "IsElementSelected");

	Params::ITypedElementSelectionInterface_IsElementSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInCurrentSelection                                               (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ETypedElementSelectionMethod ITypedElementSelectionInterface::GetSelectionElement(const struct FScriptTypedElementHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "GetSelectionElement");

	Params::ITypedElementSelectionInterface_GetSelectionElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions ITypedElementSelectionInterface::DeselectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "DeselectElement");

	Params::ITypedElementSelectionInterface_DeselectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions ITypedElementSelectionInterface::CanSelectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanSelectElement");

	Params::ITypedElementSelectionInterface_CanSelectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTypedElementSelectionOptions ITypedElementSelectionInterface::CanDeselectElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanDeselectElement");

	Params::ITypedElementSelectionInterface_CanDeselectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FScriptTypedElementListProxy ITypedElementSelectionInterface::AllowSelectionModifiers(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "AllowSelectionModifiers");

	Params::ITypedElementSelectionInterface_AllowSelectionModifiers_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


