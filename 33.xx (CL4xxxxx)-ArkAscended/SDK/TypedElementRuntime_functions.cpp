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
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSetLibrary::SetSelectionFromList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SetSelectionFromList");

	Params::UTypedElementSelectionSetLibrary_SetSelectionFromList_Params Parms{};

	Parms.SelectionOptions = SelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionSet != nullptr)
		*SelectionSet = Parms.SelectionSet;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSetLibrary::SelectElementsFromList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SelectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_SelectElementsFromList_Params Parms{};

	Parms.SelectionOptions = SelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionSet != nullptr)
		*SelectionSet = Parms.SelectionSet;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (Edit, BlueprintVisible, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FScriptTypedElementListProxyReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedSelection(class UTypedElementSelectionSet** SelectionSet, struct FTypedElementSelectionNormalizationOptions* NormalizationOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedSelection");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionSet != nullptr)
		*SelectionSet = Parms.SelectionSet;

	if (NormalizationOptions != nullptr)
		*NormalizationOptions = std::move(Parms.NormalizationOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (Edit, BlueprintVisible, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FScriptTypedElementListProxyReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedElementList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, struct FTypedElementSelectionNormalizationOptions* NormalizationOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedElementList");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionSet != nullptr)
		*SelectionSet = Parms.SelectionSet;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (NormalizationOptions != nullptr)
		*NormalizationOptions = std::move(Parms.NormalizationOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSetLibrary::DeselectElementsFromList(class UTypedElementSelectionSet** SelectionSet, struct FScriptTypedElementListProxy* ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "DeselectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params Parms{};

	Parms.SelectionOptions = SelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionSet != nullptr)
		*SelectionSet = Parms.SelectionSet;

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
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::SetSelection(TArray<struct FScriptTypedElementHandle>* InElementHandles, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SetSelection");

	Params::UTypedElementSelectionSet_SetSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementHandles != nullptr)
		*InElementHandles = std::move(Parms.InElementHandles);

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::SelectElements(TArray<struct FScriptTypedElementHandle>* InElementHandles, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElements");

	Params::UTypedElementSelectionSet_SelectElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementHandles != nullptr)
		*InElementHandles = std::move(Parms.InElementHandles);

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElement");

	Params::UTypedElementSelectionSet_SelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionSetStateInSelectionState                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)

void UTypedElementSelectionSet::OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet** SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnPreChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectionSet != nullptr)
		*SelectionSet = Parms.SelectionSet;

}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)

void UTypedElementSelectionSet::OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet** SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectionSet != nullptr)
		*SelectionSet = Parms.SelectionSet;

}


// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FScriptTypedElementHandle>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FScriptTypedElementHandle> UTypedElementSelectionSet::K2_GetSelectedElementHandles(class UClass** InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "K2_GetSelectedElementHandles");

	Params::UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBaseInterfaceType != nullptr)
		*InBaseInterfaceType = Parms.InBaseInterfaceType;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "IsElementSelected");

	Params::UTypedElementSelectionSet_IsElementSelected_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::HasSelectedObjects(class UClass** InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedObjects");

	Params::UTypedElementSelectionSet_HasSelectedObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRequiredClass != nullptr)
		*InRequiredClass = Parms.InRequiredClass;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::HasSelectedElements(class UClass** InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedElements");

	Params::UTypedElementSelectionSet_HasSelectedElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBaseInterfaceType != nullptr)
		*InBaseInterfaceType = Parms.InBaseInterfaceType;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UTypedElementSelectionSet::GetTopSelectedObject(class UClass** InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetTopSelectedObject");

	Params::UTypedElementSelectionSet_GetTopSelectedObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRequiredClass != nullptr)
		*InRequiredClass = Parms.InRequiredClass;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementHandle UTypedElementSelectionSet::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod* InSelectionMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectionElement");

	Params::UTypedElementSelectionSet_GetSelectionElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionMethod != nullptr)
		*InSelectionMethod = Parms.InSelectionMethod;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class UObject*> UTypedElementSelectionSet::GetSelectedObjects(class UClass** InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectedObjects");

	Params::UTypedElementSelectionSet_GetSelectedObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRequiredClass != nullptr)
		*InRequiredClass = Parms.InRequiredClass;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UTypedElementSelectionSet::GetNumSelectedElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetNumSelectedElements");

	Params::UTypedElementSelectionSet_GetNumSelectedElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTypedElementSelectionSetStateReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTypedElementSelectionSetState UTypedElementSelectionSet::GetCurrentSelectionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetCurrentSelectionState");

	Params::UTypedElementSelectionSet_GetCurrentSelectionState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UTypedElementSelectionSet::GetBottomSelectedObject(class UClass** InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetBottomSelectedObject");

	Params::UTypedElementSelectionSet_GetBottomSelectedObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRequiredClass != nullptr)
		*InRequiredClass = Parms.InRequiredClass;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::DeselectElements(TArray<struct FScriptTypedElementHandle>* InElementHandles, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElements");

	Params::UTypedElementSelectionSet_DeselectElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementHandles != nullptr)
		*InElementHandles = std::move(Parms.InElementHandles);

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElement");

	Params::UTypedElementSelectionSet_DeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UTypedElementSelectionSet::CountSelectedObjects(class UClass** InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedObjects");

	Params::UTypedElementSelectionSet_CountSelectedObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRequiredClass != nullptr)
		*InRequiredClass = Parms.InRequiredClass;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UTypedElementSelectionSet::CountSelectedElements(class UClass** InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedElements");

	Params::UTypedElementSelectionSet_CountSelectedElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBaseInterfaceType != nullptr)
		*InBaseInterfaceType = Parms.InBaseInterfaceType;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::ClearSelection(struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "ClearSelection");

	Params::UTypedElementSelectionSet_ClearSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanSelectElement");

	Params::UTypedElementSelectionSet_CanSelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanDeselectElement");

	Params::UTypedElementSelectionSet_CanDeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTypedElementSelectionSet::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "AllowSelectionModifiers");

	Params::UTypedElementSelectionSet_AllowSelectionModifiers_Params Parms{};

	Parms.InElementHandle = InElementHandle;

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
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FAssetData                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAssetData ITypedElementAssetDataInterface::GetAssetData(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAssetData");

	Params::ITypedElementAssetDataInterface_GetAssetData_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FAssetData>          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FAssetData> ITypedElementAssetDataInterface::GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAllReferencedAssetDatas");

	Params::ITypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params Parms{};

	Parms.InElementHandle = InElementHandle;

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
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bAllowCreate                                                     (BlueprintReadOnly, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITypedElementHierarchyInterface::GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool* bAllowCreate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetParentElement");

	Params::ITypedElementHierarchyInterface_GetParentElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bAllowCreate != nullptr)
		*bAllowCreate = Parms.bAllowCreate;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FScriptTypedElementHandle>OutElementHandles                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bAllowCreate                                                     (BlueprintReadOnly, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

void ITypedElementHierarchyInterface::GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, bool* bAllowCreate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetChildElements");

	Params::ITypedElementHierarchyInterface_GetChildElements_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutElementHandles != nullptr)
		*OutElementHandles = std::move(Parms.OutElementHandles);

	if (bAllowCreate != nullptr)
		*bAllowCreate = Parms.bAllowCreate;

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
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* ITypedElementObjectInterface::GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObjectClass");

	Params::ITypedElementObjectInterface_GetObjectClass_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ITypedElementObjectInterface::GetObject(const struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObject");

	Params::ITypedElementObjectInterface_GetObject_Params Parms{};

	Parms.InElementHandle = InElementHandle;

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
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ITypedElementSelectionInterface::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "SelectElement");

	Params::ITypedElementSelectionInterface_SelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionSet != nullptr)
		*InSelectionSet = std::move(Parms.InSelectionSet);

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ITypedElementSelectionInterface::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet, struct FTypedElementIsSelectedOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "IsElementSelected");

	Params::ITypedElementSelectionInterface_IsElementSelected_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionSet != nullptr)
		*InSelectionSet = std::move(Parms.InSelectionSet);

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInCurrentSelection                                               (Edit, ExportObject, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITypedElementSelectionInterface::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InCurrentSelection, enum class ETypedElementSelectionMethod* InSelectionMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "GetSelectionElement");

	Params::ITypedElementSelectionInterface_GetSelectionElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InCurrentSelection != nullptr)
		*InCurrentSelection = std::move(Parms.InCurrentSelection);

	if (InSelectionMethod != nullptr)
		*InSelectionMethod = Parms.InSelectionMethod;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ITypedElementSelectionInterface::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "DeselectElement");

	Params::ITypedElementSelectionInterface_DeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionSet != nullptr)
		*InSelectionSet = std::move(Parms.InSelectionSet);

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ITypedElementSelectionInterface::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanSelectElement");

	Params::ITypedElementSelectionInterface_CanSelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ITypedElementSelectionInterface::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions* InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanDeselectElement");

	Params::ITypedElementSelectionInterface_CanDeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionOptions != nullptr)
		*InSelectionOptions = std::move(Parms.InSelectionOptions);

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Edit, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ITypedElementSelectionInterface::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy* InSelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "AllowSelectionModifiers");

	Params::ITypedElementSelectionInterface_AllowSelectionModifiers_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelectionSet != nullptr)
		*InSelectionSet = std::move(Parms.InSelectionSet);

	return Parms.ReturnValue;

}

}

