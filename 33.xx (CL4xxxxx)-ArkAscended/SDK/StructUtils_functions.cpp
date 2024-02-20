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
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
// int32                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

struct FInstancedStruct UStructUtilsFunctionLibrary::SetInstancedStructValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "SetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_SetInstancedStructValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.Reset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
// class UScriptStruct*               StructType                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::Reset(class UScriptStruct** StructType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "Reset");

	Params::UStructUtilsFunctionLibrary_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StructType != nullptr)
		*StructType = Parms.StructType;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (Edit, Parm, OutParm, ReturnParm, Transient, Config)
// struct FInstancedStruct            B                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "NotEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// struct FInstancedStruct            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UStructUtilsFunctionLibrary::MakeInstancedStruct(int32* Value, const struct FInstancedStruct& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "MakeInstancedStruct");

	Params::UStructUtilsFunctionLibrary_MakeInstancedStruct_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::IsValid_InstancedStruct(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsValid_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
// enum class EStructUtilsResult      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::IsInstancedStructValid(enum class EStructUtilsResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsInstancedStructValid");

	Params::UStructUtilsFunctionLibrary_IsInstancedStructValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EStructUtilsResult      ExecResult                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
// int32                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

struct FInstancedStruct UStructUtilsFunctionLibrary::GetInstancedStructValue(enum class EStructUtilsResult* ExecResult, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "GetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_GetInstancedStructValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExecResult != nullptr)
		*ExecResult = Parms.ExecResult;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (Edit, Parm, OutParm, ReturnParm, Transient, Config)
// struct FInstancedStruct            B                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInstancedStruct UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "EqualEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


