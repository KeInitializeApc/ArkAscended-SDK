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
// struct FPropertyPathTestStruct     InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FPropertyPathTestStruct UPropertyPathTestObject::SetStructRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStructRef");

	Params::UPropertyPathTestObject_SetStructRef_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.SetStructConstRef
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FPropertyPathTestStruct UPropertyPathTestObject::SetStructConstRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStructConstRef");

	Params::UPropertyPathTestObject_SetStructConstRef_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.SetStruct
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FPropertyPathTestStruct UPropertyPathTestObject::SetStruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStruct");

	Params::UPropertyPathTestObject_SetStruct_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.SetFloat
// (Final, Native, Public)
// Parameters:
// float                              InFloat                                                          (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference)

void UPropertyPathTestObject::SetFloat(float InFloat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "SetFloat");

	Params::UPropertyPathTestObject_SetFloat_Params Parms{};

	Parms.InFloat = InFloat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropertyPath.PropertyPathTestObject.GetStructRef
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStructRef");

	Params::UPropertyPathTestObject_GetStructRef_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.GetStructConstRef
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructConstRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStructConstRef");

	Params::UPropertyPathTestObject_GetStructConstRef_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.GetStruct
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStruct");

	Params::UPropertyPathTestObject_GetStruct_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.GetFloat
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UPropertyPathTestObject::GetFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyPathTestObject", "GetFloat");

	Params::UPropertyPathTestObject_GetFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


