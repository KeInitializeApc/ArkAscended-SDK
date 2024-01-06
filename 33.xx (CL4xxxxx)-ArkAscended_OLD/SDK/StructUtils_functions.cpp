#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StructUtils.PropertyBagMissingObject
// (None)

class UClass* UPropertyBagMissingObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyBagMissingObject");

	return Clss;
}


// PropertyBagMissingObject StructUtils.Default__PropertyBagMissingObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyBagMissingObject* UPropertyBagMissingObject::GetDefaultObj()
{
	static class UPropertyBagMissingObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyBagMissingObject*>(UPropertyBagMissingObject::StaticClass()->DefaultObject);

	return Default;
}


// Class StructUtils.PropertyBag
// (Field, Struct, ScriptStruct)

class UClass* UPropertyBag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyBag");

	return Clss;
}


// PropertyBag StructUtils.Default__PropertyBag
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyBag* UPropertyBag::GetDefaultObj()
{
	static class UPropertyBag* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyBag*>(UPropertyBag::StaticClass()->DefaultObject);

	return Default;
}


// Class StructUtils.StructUtilsFunctionLibrary
// (None)

class UClass* UStructUtilsFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructUtilsFunctionLibrary");

	return Clss;
}


// StructUtilsFunctionLibrary StructUtils.Default__StructUtilsFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UStructUtilsFunctionLibrary* UStructUtilsFunctionLibrary::GetDefaultObj()
{
	static class UStructUtilsFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructUtilsFunctionLibrary*>(UStructUtilsFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

struct FInstancedStruct UStructUtilsFunctionLibrary::SetInstancedStructValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "SetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_SetInstancedStructValue_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.Reset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config)
// class UScriptStruct*               StructType                                                       (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UScriptStruct* UStructUtilsFunctionLibrary::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "Reset");

	Params::UStructUtilsFunctionLibrary_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FInstancedStruct            B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "NotEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// struct FInstancedStruct            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStructUtilsFunctionLibrary::MakeInstancedStruct(int32 Value, struct FInstancedStruct* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "MakeInstancedStruct");

	Params::UStructUtilsFunctionLibrary_MakeInstancedStruct_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::IsValid_InstancedStruct(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsValid_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config)
// enum class EStructUtilsResult      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::IsInstancedStructValid(enum class EStructUtilsResult* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsInstancedStructValid");

	Params::UStructUtilsFunctionLibrary_IsInstancedStructValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EStructUtilsResult      ExecResult                                                       (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FInstancedStruct            InstancedStruct                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

struct FInstancedStruct UStructUtilsFunctionLibrary::GetInstancedStructValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "GetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_GetInstancedStructValue_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FInstancedStruct            B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "EqualEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}

}


