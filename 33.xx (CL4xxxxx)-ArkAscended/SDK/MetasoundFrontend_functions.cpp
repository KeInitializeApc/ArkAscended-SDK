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
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               OnlyIfExists                                                     (Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::SetTrigger(bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetTrigger");

	Params::UMetasoundParameterPack_SetTrigger_Params Parms{};

	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class FString                      InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               OnlyIfExists                                                     (Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMetasoundParameterPack::SetString(bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetString");

	Params::UMetasoundParameterPack_SetString_Params Parms{};

	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               OnlyIfExists                                                     (Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMetasoundParameterPack::SetInt(bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetInt");

	Params::UMetasoundParameterPack_SetInt_Params Parms{};

	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               OnlyIfExists                                                     (Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMetasoundParameterPack::SetFloat(bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetFloat");

	Params::UMetasoundParameterPack_SetFloat_Params Parms{};

	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               OnlyIfExists                                                     (Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESetParamResult         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMetasoundParameterPack::SetBool(bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetBool");

	Params::UMetasoundParameterPack_SetBool_Params Parms{};

	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMetasoundParameterPack*     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMetasoundParameterPack::MakeMetasoundParameterPack(class UMetasoundParameterPack* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "MakeMetasoundParameterPack");

	Params::UMetasoundParameterPack_MakeMetasoundParameterPack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::HasTrigger(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasTrigger");

	Params::UMetasoundParameterPack_HasTrigger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::HasString(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasString");

	Params::UMetasoundParameterPack_HasString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::HasInt(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasInt");

	Params::UMetasoundParameterPack_HasInt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::HasFloat(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasFloat");

	Params::UMetasoundParameterPack_HasFloat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::HasBool(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasBool");

	Params::UMetasoundParameterPack_HasBool_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::GetTrigger(enum class ESetParamResult* Result, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetTrigger");

	Params::UMetasoundParameterPack_GetTrigger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::GetString(enum class ESetParamResult* Result, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetString");

	Params::UMetasoundParameterPack_GetString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::GetInt(enum class ESetParamResult* Result, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetInt");

	Params::UMetasoundParameterPack_GetInt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::GetFloat(enum class ESetParamResult* Result, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetFloat");

	Params::UMetasoundParameterPack_GetFloat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// enum class ESetParamResult         Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMetasoundParameterPack::GetBool(enum class ESetParamResult* Result, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetBool");

	Params::UMetasoundParameterPack_GetBool_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}

}


