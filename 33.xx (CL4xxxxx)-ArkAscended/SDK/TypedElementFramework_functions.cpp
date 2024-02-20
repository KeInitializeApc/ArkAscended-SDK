#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
// (None)

class UClass* ITypedElementDataStorageCompatibilityInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementDataStorageCompatibilityInterface");

	return Clss;
}


// TypedElementDataStorageCompatibilityInterface TypedElementFramework.Default__TypedElementDataStorageCompatibilityInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementDataStorageCompatibilityInterface* ITypedElementDataStorageCompatibilityInterface::GetDefaultObj()
{
	static class ITypedElementDataStorageCompatibilityInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementDataStorageCompatibilityInterface*>(ITypedElementDataStorageCompatibilityInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementDataStorageInterface
// (None)

class UClass* ITypedElementDataStorageInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementDataStorageInterface");

	return Clss;
}


// TypedElementDataStorageInterface TypedElementFramework.Default__TypedElementDataStorageInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementDataStorageInterface* ITypedElementDataStorageInterface::GetDefaultObj()
{
	static class ITypedElementDataStorageInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementDataStorageInterface*>(ITypedElementDataStorageInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementDataStorageUiInterface
// (None)

class UClass* ITypedElementDataStorageUiInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementDataStorageUiInterface");

	return Clss;
}


// TypedElementDataStorageUiInterface TypedElementFramework.Default__TypedElementDataStorageUiInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementDataStorageUiInterface* ITypedElementDataStorageUiInterface::GetDefaultObj()
{
	static class ITypedElementDataStorageUiInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementDataStorageUiInterface*>(ITypedElementDataStorageUiInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementHandleLibrary
// (None)

class UClass* UTypedElementHandleLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementHandleLibrary");

	return Clss;
}


// TypedElementHandleLibrary TypedElementFramework.Default__TypedElementHandleLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementHandleLibrary* UTypedElementHandleLibrary::GetDefaultObj()
{
	static class UTypedElementHandleLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementHandleLibrary*>(UTypedElementHandleLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TypedElementHandleLibrary.Release
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UTypedElementHandleLibrary::Release(struct FScriptTypedElementHandle* ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "Release");

	Params::UTypedElementHandleLibrary_Release_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementHandle != nullptr)
		*ElementHandle = std::move(Parms.ElementHandle);

}


// Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle   LHS                                                              (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   RHS                                                              (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementHandleLibrary::NotEqual(struct FScriptTypedElementHandle* LHS, struct FScriptTypedElementHandle* RHS, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "NotEqual");

	Params::UTypedElementHandleLibrary_NotEqual_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = std::move(Parms.LHS);

	if (RHS != nullptr)
		*RHS = std::move(Parms.RHS);

}


// Function TypedElementFramework.TypedElementHandleLibrary.IsSet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementHandleLibrary::IsSet(struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "IsSet");

	Params::UTypedElementHandleLibrary_IsSet_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementHandle != nullptr)
		*ElementHandle = std::move(Parms.ElementHandle);

}


// Function TypedElementFramework.TypedElementHandleLibrary.Equal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle   LHS                                                              (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   RHS                                                              (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementHandleLibrary::Equal(struct FScriptTypedElementHandle* LHS, struct FScriptTypedElementHandle* RHS, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "Equal");

	Params::UTypedElementHandleLibrary_Equal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = std::move(Parms.LHS);

	if (RHS != nullptr)
		*RHS = std::move(Parms.RHS);

}


// Class TypedElementFramework.TypedElementListLibrary
// (None)

class UClass* UTypedElementListLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementListLibrary");

	return Clss;
}


// TypedElementListLibrary TypedElementFramework.Default__TypedElementListLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementListLibrary* UTypedElementListLibrary::GetDefaultObj()
{
	static class UTypedElementListLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementListLibrary*>(UTypedElementListLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TypedElementListLibrary.Shrink
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UTypedElementListLibrary::Shrink(struct FScriptTypedElementListProxy* ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Shrink");

	Params::UTypedElementListLibrary_Shrink_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

}


// Function TypedElementFramework.TypedElementListLibrary.Reset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UTypedElementListLibrary::Reset(struct FScriptTypedElementListProxy* ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Reset");

	Params::UTypedElementListLibrary_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

}


// Function TypedElementFramework.TypedElementListLibrary.Reserve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)

int32 UTypedElementListLibrary::Reserve(struct FScriptTypedElementListProxy* ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Reserve");

	Params::UTypedElementListLibrary_Reserve_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Remove
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::Remove(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Remove");

	Params::UTypedElementListLibrary_Remove_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (ElementHandle != nullptr)
		*ElementHandle = std::move(Parms.ElementHandle);

}


// Function TypedElementFramework.TypedElementListLibrary.Num
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::Num(struct FScriptTypedElementListProxy* ElementList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Num");

	Params::UTypedElementListLibrary_Num_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

}


// Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::IsValidIndex(struct FScriptTypedElementListProxy* ElementList, int32* Index, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "IsValidIndex");

	Params::UTypedElementListLibrary_IsValidIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        ElementTypeName                                                  (Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::HasElementsOfType(struct FScriptTypedElementListProxy* ElementList, class FName* ElementTypeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "HasElementsOfType");

	Params::UTypedElementListLibrary_HasElementsOfType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (ElementTypeName != nullptr)
		*ElementTypeName = Parms.ElementTypeName;

}


// Function TypedElementFramework.TypedElementListLibrary.HasElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      BaseInterfaceType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::HasElements(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "HasElements");

	Params::UTypedElementListLibrary_HasElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (BaseInterfaceType != nullptr)
		*BaseInterfaceType = Parms.BaseInterfaceType;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      BaseInterfaceType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::GetElementInterface(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, class UClass** BaseInterfaceType, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementInterface");

	Params::UTypedElementListLibrary_GetElementInterface_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (ElementHandle != nullptr)
		*ElementHandle = std::move(Parms.ElementHandle);

	if (BaseInterfaceType != nullptr)
		*BaseInterfaceType = Parms.BaseInterfaceType;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      BaseInterfaceType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FScriptTypedElementHandle>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::GetElementHandles(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType, const TArray<struct FScriptTypedElementHandle>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementHandles");

	Params::UTypedElementListLibrary_GetElementHandles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (BaseInterfaceType != nullptr)
		*BaseInterfaceType = Parms.BaseInterfaceType;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FScriptTypedElementHandle   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::GetElementHandleAt(struct FScriptTypedElementListProxy* ElementList, int32* Index, const struct FScriptTypedElementHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementHandleAt");

	Params::UTypedElementListLibrary_GetElementHandleAt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function TypedElementFramework.TypedElementListLibrary.Empty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Slack                                                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UTypedElementListLibrary::Empty(struct FScriptTypedElementListProxy* ElementList, int32* Slack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Empty");

	Params::UTypedElementListLibrary_Empty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (Slack != nullptr)
		*Slack = Parms.Slack;

}


// Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementRegistry*       Registry                                                         (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementListProxyReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::CreateScriptElementList(class UTypedElementRegistry** Registry, const struct FScriptTypedElementListProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CreateScriptElementList");

	Params::UTypedElementListLibrary_CreateScriptElementList_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Registry != nullptr)
		*Registry = Parms.Registry;

}


// Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        ElementTypeName                                                  (Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::CountElementsOfType(struct FScriptTypedElementListProxy* ElementList, class FName* ElementTypeName, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CountElementsOfType");

	Params::UTypedElementListLibrary_CountElementsOfType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (ElementTypeName != nullptr)
		*ElementTypeName = Parms.ElementTypeName;

}


// Function TypedElementFramework.TypedElementListLibrary.CountElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      BaseInterfaceType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::CountElements(struct FScriptTypedElementListProxy* ElementList, class UClass** BaseInterfaceType, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CountElements");

	Params::UTypedElementListLibrary_CountElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (BaseInterfaceType != nullptr)
		*BaseInterfaceType = Parms.BaseInterfaceType;

}


// Function TypedElementFramework.TypedElementListLibrary.Contains
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::Contains(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Contains");

	Params::UTypedElementListLibrary_Contains_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (ElementHandle != nullptr)
		*ElementHandle = std::move(Parms.ElementHandle);

}


// Function TypedElementFramework.TypedElementListLibrary.Clone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementListProxyReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::Clone(struct FScriptTypedElementListProxy* ElementList, const struct FScriptTypedElementListProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Clone");

	Params::UTypedElementListLibrary_Clone_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

}


// Function TypedElementFramework.TypedElementListLibrary.AppendList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementListProxyOtherElementList                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UTypedElementListLibrary::AppendList(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementListProxy* OtherElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "AppendList");

	Params::UTypedElementListLibrary_AppendList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (OtherElementList != nullptr)
		*OtherElementList = std::move(Parms.OtherElementList);

}


// Function TypedElementFramework.TypedElementListLibrary.Append
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FScriptTypedElementHandle>ElementHandles                                                   (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UTypedElementListLibrary::Append(struct FScriptTypedElementListProxy* ElementList, TArray<struct FScriptTypedElementHandle>* ElementHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Append");

	Params::UTypedElementListLibrary_Append_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (ElementHandles != nullptr)
		*ElementHandles = std::move(Parms.ElementHandles);

}


// Function TypedElementFramework.TypedElementListLibrary.Add
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementListLibrary::Add(struct FScriptTypedElementListProxy* ElementList, struct FScriptTypedElementHandle* ElementHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Add");

	Params::UTypedElementListLibrary_Add_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ElementList != nullptr)
		*ElementList = std::move(Parms.ElementList);

	if (ElementHandle != nullptr)
		*ElementHandle = std::move(Parms.ElementHandle);

}


// Class TypedElementFramework.TypedElementCounterInterface
// (None)

class UClass* ITypedElementCounterInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementCounterInterface");

	return Clss;
}


// TypedElementCounterInterface TypedElementFramework.Default__TypedElementCounterInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementCounterInterface* ITypedElementCounterInterface::GetDefaultObj()
{
	static class ITypedElementCounterInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementCounterInterface*>(ITypedElementCounterInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementRegistry
// (None)

class UClass* UTypedElementRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementRegistry");

	return Clss;
}


// TypedElementRegistry TypedElementFramework.Default__TypedElementRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementRegistry* UTypedElementRegistry::GetDefaultObj()
{
	static class UTypedElementRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementRegistry*>(UTypedElementRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TypedElementRegistry.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementRegistry*       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTypedElementRegistry::GetInstance(class UTypedElementRegistry* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementRegistry", "GetInstance");

	Params::UTypedElementRegistry_GetInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementRegistry.GetElementInterface
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UClass*                      InBaseInterfaceType                                              (Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* UTypedElementRegistry::GetElementInterface(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementRegistry", "GetElementInterface");

	Params::UTypedElementRegistry_GetElementInterface_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceA
// (None)

class UClass* ITestTypedElementInterfaceA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceA");

	return Clss;
}


// TestTypedElementInterfaceA TypedElementFramework.Default__TestTypedElementInterfaceA
// (Public, ClassDefaultObject, ArchetypeObject)

class ITestTypedElementInterfaceA* ITestTypedElementInterfaceA::GetDefaultObj()
{
	static class ITestTypedElementInterfaceA* Default = nullptr;

	if (!Default)
		Default = static_cast<ITestTypedElementInterfaceA*>(ITestTypedElementInterfaceA::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FText                        InNewName                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               bNotify                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITestTypedElementInterfaceA::SetDisplayName(class FText InNewName, bool* bNotify, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "SetDisplayName");

	Params::ITestTypedElementInterfaceA_SetDisplayName_Params Parms{};

	Parms.InNewName = InNewName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bNotify != nullptr)
		*bNotify = Parms.bNotify;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITestTypedElementInterfaceA::GetDisplayName(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "GetDisplayName");

	Params::ITestTypedElementInterfaceA_GetDisplayName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceB
// (None)

class UClass* ITestTypedElementInterfaceB::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceB");

	return Clss;
}


// TestTypedElementInterfaceB TypedElementFramework.Default__TestTypedElementInterfaceB
// (Public, ClassDefaultObject, ArchetypeObject)

class ITestTypedElementInterfaceB* ITestTypedElementInterfaceB::GetDefaultObj()
{
	static class ITestTypedElementInterfaceB* Default = nullptr;

	if (!Default)
		Default = static_cast<ITestTypedElementInterfaceB*>(ITestTypedElementInterfaceB::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITestTypedElementInterfaceB::MarkAsTested(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceB", "MarkAsTested");

	Params::ITestTypedElementInterfaceB_MarkAsTested_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceC
// (None)

class UClass* ITestTypedElementInterfaceC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceC");

	return Clss;
}


// TestTypedElementInterfaceC TypedElementFramework.Default__TestTypedElementInterfaceC
// (Public, ClassDefaultObject, ArchetypeObject)

class ITestTypedElementInterfaceC* ITestTypedElementInterfaceC::GetDefaultObj()
{
	static class ITestTypedElementInterfaceC* Default = nullptr;

	if (!Default)
		Default = static_cast<ITestTypedElementInterfaceC*>(ITestTypedElementInterfaceC::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FScriptTypedElementHandle ITestTypedElementInterfaceC::GetIsTested(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceC", "GetIsTested");

	Params::ITestTypedElementInterfaceC_GetIsTested_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// (None)

class UClass* UTestTypedElementInterfaceA_ImplTyped::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplTyped");

	return Clss;
}


// TestTypedElementInterfaceA_ImplTyped TypedElementFramework.Default__TestTypedElementInterfaceA_ImplTyped
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestTypedElementInterfaceA_ImplTyped* UTestTypedElementInterfaceA_ImplTyped::GetDefaultObj()
{
	static class UTestTypedElementInterfaceA_ImplTyped* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestTypedElementInterfaceA_ImplTyped*>(UTestTypedElementInterfaceA_ImplTyped::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// (None)

class UClass* UTestTypedElementInterfaceA_ImplUntyped::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplUntyped");

	return Clss;
}


// TestTypedElementInterfaceA_ImplUntyped TypedElementFramework.Default__TestTypedElementInterfaceA_ImplUntyped
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestTypedElementInterfaceA_ImplUntyped* UTestTypedElementInterfaceA_ImplUntyped::GetDefaultObj()
{
	static class UTestTypedElementInterfaceA_ImplUntyped* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestTypedElementInterfaceA_ImplUntyped*>(UTestTypedElementInterfaceA_ImplUntyped::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// (None)

class UClass* UTestTypedElementInterfaceBAndC_Typed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceBAndC_Typed");

	return Clss;
}


// TestTypedElementInterfaceBAndC_Typed TypedElementFramework.Default__TestTypedElementInterfaceBAndC_Typed
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestTypedElementInterfaceBAndC_Typed* UTestTypedElementInterfaceBAndC_Typed::GetDefaultObj()
{
	static class UTestTypedElementInterfaceBAndC_Typed* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestTypedElementInterfaceBAndC_Typed*>(UTestTypedElementInterfaceBAndC_Typed::StaticClass()->DefaultObject);

	return Default;
}

}


