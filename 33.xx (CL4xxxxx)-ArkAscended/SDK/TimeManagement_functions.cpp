#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TimeManagement.TimeSynchronizationSource
// (None)

class UClass* UTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeSynchronizationSource");

	return Clss;
}


// TimeSynchronizationSource TimeManagement.Default__TimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeSynchronizationSource* UTimeSynchronizationSource::GetDefaultObj()
{
	static class UTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeSynchronizationSource*>(UTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.FixedFrameRateCustomTimeStep
// (None)

class UClass* UFixedFrameRateCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedFrameRateCustomTimeStep");

	return Clss;
}


// FixedFrameRateCustomTimeStep TimeManagement.Default__FixedFrameRateCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UFixedFrameRateCustomTimeStep* UFixedFrameRateCustomTimeStep::GetDefaultObj()
{
	static class UFixedFrameRateCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedFrameRateCustomTimeStep*>(UFixedFrameRateCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.GenlockedCustomTimeStep
// (None)

class UClass* UGenlockedCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenlockedCustomTimeStep");

	return Clss;
}


// GenlockedCustomTimeStep TimeManagement.Default__GenlockedCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenlockedCustomTimeStep* UGenlockedCustomTimeStep::GetDefaultObj()
{
	static class UGenlockedCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenlockedCustomTimeStep*>(UGenlockedCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// (None)

class UClass* UGenlockedFixedRateCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenlockedFixedRateCustomTimeStep");

	return Clss;
}


// GenlockedFixedRateCustomTimeStep TimeManagement.Default__GenlockedFixedRateCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenlockedFixedRateCustomTimeStep* UGenlockedFixedRateCustomTimeStep::GetDefaultObj()
{
	static class UGenlockedFixedRateCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenlockedFixedRateCustomTimeStep*>(UGenlockedFixedRateCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.GenlockedTimecodeProvider
// (None)

class UClass* UGenlockedTimecodeProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenlockedTimecodeProvider");

	return Clss;
}


// GenlockedTimecodeProvider TimeManagement.Default__GenlockedTimecodeProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenlockedTimecodeProvider* UGenlockedTimecodeProvider::GetDefaultObj()
{
	static class UGenlockedTimecodeProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenlockedTimecodeProvider*>(UGenlockedTimecodeProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.TimeManagementBlueprintLibrary
// (None)

class UClass* UTimeManagementBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeManagementBlueprintLibrary");

	return Clss;
}


// TimeManagementBlueprintLibrary TimeManagement.Default__TimeManagementBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeManagementBlueprintLibrary* UTimeManagementBlueprintLibrary::GetDefaultObj()
{
	static class UTimeManagementBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeManagementBlueprintLibrary*>(UTimeManagementBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime                  SourceTime                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FFrameRate                  SourceRate                                                       (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFrameRate                  DestinationRate                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UTimeManagementBlueprintLibrary::TransformTime(struct FFrameTime* SourceTime, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "TransformTime");

	Params::UTimeManagementBlueprintLibrary_TransformTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceTime != nullptr)
		*SourceTime = std::move(Parms.SourceTime);

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// int32                              B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Subtract_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Subtract_FrameNumberFrameNumber");

	Params::UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime                  SourceTime                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FFrameRate                  SourceRate                                                       (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFrameRate                  SnapToRate                                                       (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(struct FFrameTime* SourceTime, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "SnapFrameTimeToRate");

	Params::UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceTime != nullptr)
		*SourceTime = std::move(Parms.SourceTime);

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              TimeInSeconds                                                    (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Multiply_SecondsFrameRate");

	Params::UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// int32                              B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Multiply_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFrameRate                  OtherFramerate                                                   (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UTimeManagementBlueprintLibrary::IsValid_MultipleOf(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "IsValid_MultipleOf");

	Params::UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UTimeManagementBlueprintLibrary::IsValid_Framerate(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "IsValid_Framerate");

	Params::UTimeManagementBlueprintLibrary_IsValid_Framerate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UTimeManagementBlueprintLibrary::GetTimecodeFrameRate(const struct FFrameRate& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "GetTimecodeFrameRate");

	Params::UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UTimeManagementBlueprintLibrary::GetTimecode(const struct FTimecode& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "GetTimecode");

	Params::UTimeManagementBlueprintLibrary_GetTimecode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// int32                              B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Divide_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode                   InTimecode                                                       (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bForceSignDisplay                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_TimecodeToString");

	Params::UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime         InFrameTime                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQualifiedFrameTime UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_QualifiedFrameTimeToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameRateToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                InFrameNumber                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(struct FFrameNumber* InFrameNumber, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameNumberToInteger");

	Params::UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFrameNumber != nullptr)
		*InFrameNumber = std::move(Parms.InFrameNumber);

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// int32                              B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Add_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Add_FrameNumberFrameNumber");

	Params::UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


