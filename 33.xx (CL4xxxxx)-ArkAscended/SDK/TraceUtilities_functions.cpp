#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TraceUtilities.TraceUtilLibrary
// (None)

class UClass* UTraceUtilLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TraceUtilLibrary");

	return Clss;
}


// TraceUtilLibrary TraceUtilities.Default__TraceUtilLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTraceUtilLibrary* UTraceUtilLibrary::GetDefaultObj()
{
	static class UTraceUtilLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTraceUtilLibrary*>(UTraceUtilLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void UTraceUtilLibrary::TraceMarkRegionStart(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceMarkRegionStart");

	Params::UTraceUtilLibrary_TraceMarkRegionStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void UTraceUtilLibrary::TraceMarkRegionEnd(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceMarkRegionEnd");

	Params::UTraceUtilLibrary_TraceMarkRegionEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TraceUtilities.TraceUtilLibrary.TraceBookmark
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void UTraceUtilLibrary::TraceBookmark(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceBookmark");

	Params::UTraceUtilLibrary_TraceBookmark_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TraceUtilities.TraceUtilLibrary.ToggleChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::ToggleChannel(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "ToggleChannel");

	Params::UTraceUtilLibrary_ToggleChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.StopTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::StopTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StopTracing");

	Params::UTraceUtilLibrary_StopTracing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.StartTraceToFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// TArray<class FString>              Channels                                                         (BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::StartTraceToFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StartTraceToFile");

	Params::UTraceUtilLibrary_StartTraceToFile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// TArray<class FString>              Channels                                                         (BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::StartTraceSendTo(const class FString& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StartTraceSendTo");

	Params::UTraceUtilLibrary_StartTraceSendTo_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.ResumeTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::ResumeTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "ResumeTracing");

	Params::UTraceUtilLibrary_ResumeTracing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.PauseTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::PauseTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "PauseTracing");

	Params::UTraceUtilLibrary_PauseTracing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.IsTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::IsTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "IsTracing");

	Params::UTraceUtilLibrary_IsTracing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UTraceUtilLibrary::IsChannelEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "IsChannelEnabled");

	Params::UTraceUtilLibrary_IsChannelEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FString> UTraceUtilLibrary::GetEnabledChannels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "GetEnabledChannels");

	Params::UTraceUtilLibrary_GetEnabledChannels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.GetAllChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FString> UTraceUtilLibrary::GetAllChannels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "GetAllChannels");

	Params::UTraceUtilLibrary_GetAllChannels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


