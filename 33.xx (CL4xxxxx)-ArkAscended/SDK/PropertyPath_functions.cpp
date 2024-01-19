#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PropertyPath.PropertyPathTestObject
// (None)

class UClass* UPropertyPathTestObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyPathTestObject");

	return Clss;
}


// PropertyPathTestObject PropertyPath.Default__PropertyPathTestObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyPathTestObject* UPropertyPathTestObject::GetDefaultObj()
{
	static class UPropertyPathTestObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyPathTestObject*>(UPropertyPathTestObject::StaticClass()->DefaultObject);

	return Default;
}


// Function PropertyPath.PropertyPathTestObject.SetStructRef
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UPropertyPathTestObject::SetStructRef(const struct FPropertyPathTestStruct& InStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStructRef");

	Params::UPropertyPathTestObject_SetStructRef_Params Parms{};

	Parms.InStruct = InStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropertyPath.PropertyPathTestObject.SetStructConstRef
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UPropertyPathTestObject::SetStructConstRef(const struct FPropertyPathTestStruct& InStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStructConstRef");

	Params::UPropertyPathTestObject_SetStructConstRef_Params Parms{};

	Parms.InStruct = InStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropertyPath.PropertyPathTestObject.SetStruct
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UPropertyPathTestObject::SetStruct(const struct FPropertyPathTestStruct& InStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStruct");

	Params::UPropertyPathTestObject_SetStruct_Params Parms{};

	Parms.InStruct = InStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropertyPath.PropertyPathTestObject.SetFloat
// (Final, Native, Public)
// Parameters:
// float                              InFloat                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

float UPropertyPathTestObject::SetFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetFloat");

	Params::UPropertyPathTestObject_SetFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.GetStructRef
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPropertyPathTestObject::GetStructRef(const struct FPropertyPathTestStruct& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStructRef");

	Params::UPropertyPathTestObject_GetStructRef_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropertyPath.PropertyPathTestObject.GetStructConstRef
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPropertyPathTestObject::GetStructConstRef(const struct FPropertyPathTestStruct& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStructConstRef");

	Params::UPropertyPathTestObject_GetStructConstRef_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropertyPath.PropertyPathTestObject.GetStruct
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPropertyPathTestObject::GetStruct(const struct FPropertyPathTestStruct& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStruct");

	Params::UPropertyPathTestObject_GetStruct_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropertyPath.PropertyPathTestObject.GetFloat
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPropertyPathTestObject::GetFloat(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetFloat");

	Params::UPropertyPathTestObject_GetFloat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


