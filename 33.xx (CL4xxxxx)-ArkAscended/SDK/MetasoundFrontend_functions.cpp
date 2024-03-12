#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MetasoundFrontend.MetasoundParameterPack
// (None)

class UClass* UMetasoundParameterPack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundParameterPack");

	return Clss;
}


// MetasoundParameterPack MetasoundFrontend.Default__MetasoundParameterPack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundParameterPack* UMetasoundParameterPack::GetDefaultObj()
{
	static class UMetasoundParameterPack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundParameterPack*>(UMetasoundParameterPack::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::SetTrigger(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetTrigger");

	Params::UMetasoundParameterPack_SetTrigger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::SetString(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetString");

	Params::UMetasoundParameterPack_SetString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::SetInt(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetInt");

	Params::UMetasoundParameterPack_SetInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::SetFloat(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetFloat");

	Params::UMetasoundParameterPack_SetFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetParamResult UMetasoundParameterPack::SetBool(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetBool");

	Params::UMetasoundParameterPack_SetBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMetasoundParameterPack*     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMetasoundParameterPack* UMetasoundParameterPack::MakeMetasoundParameterPack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "MakeMetasoundParameterPack");

	Params::UMetasoundParameterPack_MakeMetasoundParameterPack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::HasTrigger(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasTrigger");

	Params::UMetasoundParameterPack_HasTrigger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::HasString(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasString");

	Params::UMetasoundParameterPack_HasString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::HasInt(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasInt");

	Params::UMetasoundParameterPack_HasInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::HasFloat(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasFloat");

	Params::UMetasoundParameterPack_HasFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::HasBool(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasBool");

	Params::UMetasoundParameterPack_HasBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::GetTrigger(class FName* ParameterName, enum class ESetParamResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetTrigger");

	Params::UMetasoundParameterPack_GetTrigger_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UMetasoundParameterPack::GetString(class FName* ParameterName, enum class ESetParamResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetString");

	Params::UMetasoundParameterPack_GetString_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMetasoundParameterPack::GetInt(class FName* ParameterName, enum class ESetParamResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetInt");

	Params::UMetasoundParameterPack_GetInt_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UMetasoundParameterPack::GetFloat(class FName* ParameterName, enum class ESetParamResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetFloat");

	Params::UMetasoundParameterPack_GetFloat_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMetasoundParameterPack::GetBool(class FName* ParameterName, enum class ESetParamResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetBool");

	Params::UMetasoundParameterPack_GetBool_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}

}


