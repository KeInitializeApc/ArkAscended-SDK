#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieRenderPipelineCore.MoviePipelineSetting
// (None)

class UClass* UMoviePipelineSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineSetting");

	return Clss;
}


// MoviePipelineSetting MovieRenderPipelineCore.Default__MoviePipelineSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineSetting* UMoviePipelineSetting::GetDefaultObj()
{
	static class UMoviePipelineSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineSetting*>(UMoviePipelineSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMoviePipelineSetting::SetIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "SetIsEnabled");

	Params::UMoviePipelineSetting_SetIsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineSetting::IsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "IsEnabled");

	Params::UMoviePipelineSetting_IsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              InOutUnrealURLParams                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FString>              InOutCommandLineArgs                                             (ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FString>              InOutDeviceProfileCvars                                          (ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FString>              InOutExecCmds                                                    (Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipelineSetting::BuildNewProcessCommandLineArgs(TArray<class FString>* InOutUnrealURLParams, TArray<class FString>* InOutCommandLineArgs, TArray<class FString>* InOutDeviceProfileCvars, TArray<class FString>* InOutExecCmds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "BuildNewProcessCommandLineArgs");

	Params::UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutUnrealURLParams != nullptr)
		*InOutUnrealURLParams = std::move(Parms.InOutUnrealURLParams);

	if (InOutCommandLineArgs != nullptr)
		*InOutCommandLineArgs = std::move(Parms.InOutCommandLineArgs);

	if (InOutDeviceProfileCvars != nullptr)
		*InOutDeviceProfileCvars = std::move(Parms.InOutDeviceProfileCvars);

	if (InOutExecCmds != nullptr)
		*InOutExecCmds = std::move(Parms.InOutExecCmds);

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InOutUnrealURLParams                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InOutCommandLineArgs                                             (ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipelineSetting::BuildNewProcessCommandLine(class FString* InOutUnrealURLParams, class FString* InOutCommandLineArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "BuildNewProcessCommandLine");

	Params::UMoviePipelineSetting_BuildNewProcessCommandLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutUnrealURLParams != nullptr)
		*InOutUnrealURLParams = std::move(Parms.InOutUnrealURLParams);

	if (InOutCommandLineArgs != nullptr)
		*InOutCommandLineArgs = std::move(Parms.InOutCommandLineArgs);

}


// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
// (None)

class UClass* UMoviePipelineCameraSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCameraSetting");

	return Clss;
}


// MoviePipelineCameraSetting MovieRenderPipelineCore.Default__MoviePipelineCameraSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCameraSetting* UMoviePipelineCameraSetting::GetDefaultObj()
{
	static class UMoviePipelineCameraSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCameraSetting*>(UMoviePipelineCameraSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineGameMode
// (Actor)

class UClass* AMoviePipelineGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineGameMode");

	return Clss;
}


// MoviePipelineGameMode MovieRenderPipelineCore.Default__MoviePipelineGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoviePipelineGameMode* AMoviePipelineGameMode::GetDefaultObj()
{
	static class AMoviePipelineGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoviePipelineGameMode*>(AMoviePipelineGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
// (None)

class UClass* UMoviePipelineHighResSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineHighResSetting");

	return Clss;
}


// MoviePipelineHighResSetting MovieRenderPipelineCore.Default__MoviePipelineHighResSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineHighResSetting* UMoviePipelineHighResSetting::GetDefaultObj()
{
	static class UMoviePipelineHighResSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineHighResSetting*>(UMoviePipelineHighResSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
// (None)

class UClass* UMoviePipelineInProcessExecutorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineInProcessExecutorSettings");

	return Clss;
}


// MoviePipelineInProcessExecutorSettings MovieRenderPipelineCore.Default__MoviePipelineInProcessExecutorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineInProcessExecutorSettings* UMoviePipelineInProcessExecutorSettings::GetDefaultObj()
{
	static class UMoviePipelineInProcessExecutorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineInProcessExecutorSettings*>(UMoviePipelineInProcessExecutorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineOutputBase
// (None)

class UClass* UMoviePipelineOutputBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineOutputBase");

	return Clss;
}


// MoviePipelineOutputBase MovieRenderPipelineCore.Default__MoviePipelineOutputBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineOutputBase* UMoviePipelineOutputBase::GetDefaultObj()
{
	static class UMoviePipelineOutputBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineOutputBase*>(UMoviePipelineOutputBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
// (None)

class UClass* UMoviePipelineSetting_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineSetting_BlueprintBase");

	return Clss;
}


// MoviePipelineSetting_BlueprintBase MovieRenderPipelineCore.Default__MoviePipelineSetting_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineSetting_BlueprintBase* UMoviePipelineSetting_BlueprintBase::GetDefaultObj()
{
	static class UMoviePipelineSetting_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineSetting_BlueprintBase*>(UMoviePipelineSetting_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipelineSetting_BlueprintBase::ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveTeardownForPipelineImpl");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params Parms{};

	Parms.InPipeline = InPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipelineSetting_BlueprintBase::ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveSetupForPipelineImpl");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params Parms{};

	Parms.InPipeline = InPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FMoviePipelineFormatArgs    InOutFormatArgs                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMoviePipelineFormatArgs    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineSetting_BlueprintBase::ReceiveGetFormatArguments(const struct FMoviePipelineFormatArgs& InOutFormatArgs, const struct FMoviePipelineFormatArgs& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveGetFormatArguments");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params Parms{};

	Parms.InOutFormatArgs = InOutFormatArgs;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoviePipelineSetting_BlueprintBase::OnEngineTickBeginFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "OnEngineTickBeginFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
// (None)

class UClass* UMoviePipelineViewFamilySetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineViewFamilySetting");

	return Clss;
}


// MoviePipelineViewFamilySetting MovieRenderPipelineCore.Default__MoviePipelineViewFamilySetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineViewFamilySetting* UMoviePipelineViewFamilySetting::GetDefaultObj()
{
	static class UMoviePipelineViewFamilySetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineViewFamilySetting*>(UMoviePipelineViewFamilySetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieRenderDebugWidget
// (None)

class UClass* UMovieRenderDebugWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieRenderDebugWidget");

	return Clss;
}


// MovieRenderDebugWidget MovieRenderPipelineCore.Default__MovieRenderDebugWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieRenderDebugWidget* UMovieRenderDebugWidget::GetDefaultObj()
{
	static class UMovieRenderDebugWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieRenderDebugWidget*>(UMovieRenderDebugWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              ForPipeline                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieRenderDebugWidget::OnInitializedForPipeline(class UMoviePipeline* ForPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieRenderDebugWidget", "OnInitializedForPipeline");

	Params::UMovieRenderDebugWidget_OnInitializedForPipeline_Params Parms{};

	Parms.ForPipeline = ForPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MovieRenderPipelineCore.MoviePipeline
// (None)

class UClass* UMoviePipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipeline");

	return Clss;
}


// MoviePipeline MovieRenderPipelineCore.Default__MoviePipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipeline* UMoviePipeline::GetDefaultObj()
{
	static class UMoviePipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipeline*>(UMoviePipeline::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipeline.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bError                                                           (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipeline::Shutdown(bool* bError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "Shutdown");

	Params::UMoviePipeline_Shutdown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bError != nullptr)
		*bError = Parms.bError;

}


// Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipeline::SetInitializationTime(const struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "SetInitializationTime");

	Params::UMoviePipeline_SetInitializationTime_Params Parms{};

	Parms.InDateTime = InDateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsError                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipeline::RequestShutdown(bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "RequestShutdown");

	Params::UMoviePipeline_RequestShutdown_Params Parms{};

	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipeline::OnMoviePipelineFinishedImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "OnMoviePipelineFinishedImpl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipeline::IsShutdownRequested(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "IsShutdownRequested");

	Params::UMoviePipeline_IsShutdownRequested_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UMoviePipeline::Initialize(class UMoviePipelineExecutorJob** InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "Initialize");

	Params::UMoviePipeline_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InJob != nullptr)
		*InJob = Parms.InJob;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipeline::GetPreviewTexture(class UTexture* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPreviewTexture");

	Params::UMoviePipeline_GetPreviewTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipeline::GetPipelinePrimaryConfig(class UMoviePipelinePrimaryConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPipelinePrimaryConfig");

	Params::UMoviePipeline_GetPipelinePrimaryConfig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipeline::GetPipelineMasterConfig(class UMoviePipelinePrimaryConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPipelineMasterConfig");

	Params::UMoviePipeline_GetPipelineMasterConfig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipeline::GetInitializationTime(const struct FDateTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetInitializationTime");

	Params::UMoviePipeline_GetInitializationTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipeline::GetCurrentJob(class UMoviePipelineExecutorJob* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetCurrentJob");

	Params::UMoviePipeline_GetCurrentJob_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
// (None)

class UClass* UMoviePipelineCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCustomTimeStep");

	return Clss;
}


// MoviePipelineCustomTimeStep MovieRenderPipelineCore.Default__MoviePipelineCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCustomTimeStep* UMoviePipelineCustomTimeStep::GetDefaultObj()
{
	static class UMoviePipelineCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCustomTimeStep*>(UMoviePipelineCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
// (None)

class UClass* UMoviePipelineAntiAliasingSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineAntiAliasingSetting");

	return Clss;
}


// MoviePipelineAntiAliasingSetting MovieRenderPipelineCore.Default__MoviePipelineAntiAliasingSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineAntiAliasingSetting* UMoviePipelineAntiAliasingSetting::GetDefaultObj()
{
	static class UMoviePipelineAntiAliasingSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineAntiAliasingSetting*>(UMoviePipelineAntiAliasingSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
// (None)

class UClass* UMoviePipelineBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBlueprintLibrary");

	return Clss;
}


// MoviePipelineBlueprintLibrary MovieRenderPipelineCore.Default__MoviePipelineBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBlueprintLibrary* UMoviePipelineBlueprintLibrary::GetDefaultObj()
{
	static class UMoviePipelineBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBlueprintLibrary*>(UMoviePipelineBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorJob*   InJob                                                            (Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bShotsChanged                                                    (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob** InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "UpdateJobShotListFromSequence");

	Params::UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InJob != nullptr)
		*InJob = Parms.InJob;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMoviePipelineFilenameResolveParamsInParams                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bGetNextVersion                                                  (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMoviePipelineBlueprintLibrary::ResolveVersionNumber(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "ResolveVersionNumber");

	Params::UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InFormatString                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMoviePipelineFilenameResolveParamsInParams                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      OutFinalPath                                                     (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMoviePipelineFormatArgs    OutMergedFormatArgs                                              (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMoviePipelineFormatArgs UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "ResolveFilenameFormatArguments");

	Params::UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InManifestFilePath                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineQueue*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(class UMoviePipelineQueue* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "LoadManifestFileFromString");

	Params::UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTimecode                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetRootTimecode(class UMoviePipeline** InMoviePipeline, const struct FTimecode& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetRootTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetRootTimecode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetRootFrameNumber(class UMoviePipeline** InMoviePipeline, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetRootFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieRenderPipelineStateReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetPipelineState(class UMoviePipeline* InPipeline, enum class EMovieRenderPipelineState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetPipelineState");

	Params::UMoviePipelineBlueprintLibrary_GetPipelineState_Params Parms{};

	Parms.InPipeline = InPipeline;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              OutCurrentIndex                                                  (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              OutTotalCount                                                    (Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(class UMoviePipeline** InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetOverallSegmentCounts");

	Params::UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              OutCurrentIndex                                                  (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              OutTotalCount                                                    (Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(class UMoviePipeline** InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetOverallOutputFrames");

	Params::UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetMoviePipelineEngineChangelistLabel(class UMoviePipeline** InMoviePipeline, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMoviePipelineEngineChangelistLabel");

	Params::UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTimecode                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetMasterTimecode(class UMoviePipeline** InMoviePipeline, const struct FTimecode& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMasterTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(class UMoviePipeline** InMoviePipeline, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMasterFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetMapPackageName(class UMoviePipelineExecutorJob** InJob, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMapPackageName");

	Params::UMoviePipelineBlueprintLibrary_GetMapPackageName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InJob != nullptr)
		*InJob = Parms.InJob;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetJobName(class UMoviePipeline** InMoviePipeline, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobName");

	Params::UMoviePipelineBlueprintLibrary_GetJobName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FDateTime                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetJobInitializationTime(class UMoviePipeline** InMoviePipeline, const struct FDateTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobInitializationTime");

	Params::UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetJobAuthor(class UMoviePipeline** InMoviePipeline, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobAuthor");

	Params::UMoviePipelineBlueprintLibrary_GetJobAuthor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTimespan                   OutEstimate                                                      (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTimespan UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetEstimatedTimeRemaining");

	Params::UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params Parms{};

	Parms.InPipeline = InPipeline;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMoviePipelinePrimaryConfig* InPrimaryConfig                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorShot*  InPipelineExecutorShot                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntPoint                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig** InPrimaryConfig, class UMoviePipelineExecutorShot** InPipelineExecutorShot, const struct FIntPoint& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetEffectiveOutputResolution");

	Params::UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPrimaryConfig != nullptr)
		*InPrimaryConfig = Parms.InPrimaryConfig;

	if (InPipelineExecutorShot != nullptr)
		*InPipelineExecutorShot = Parms.InPipelineExecutorShot;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTimecode                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(class UMoviePipeline** InMoviePipeline, const struct FTimecode& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentShotTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameNumber                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(class UMoviePipeline** InMoviePipeline, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentShotFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class ULevelSequence*              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentSequence(class UMoviePipeline** InMoviePipeline, class ULevelSequence* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSequence");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMoviePipelineSegmentWorkMetricsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(class UMoviePipeline** InMoviePipeline, const struct FMoviePipelineSegmentWorkMetrics& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentWorkMetrics");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieRenderShotState   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(class UMoviePipeline** InMoviePipeline, enum class EMovieRenderShotState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentState");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        OutOuterName                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        OutInnerName                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(class UMoviePipeline** InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentName");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

	if (OutOuterName != nullptr)
		*OutOuterName = Parms.OutOuterName;

	if (OutInnerName != nullptr)
		*OutInnerName = Parms.OutInnerName;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(class UMoviePipeline** InMoviePipeline, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentFocusDistance");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(class UMoviePipeline** InMoviePipeline, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentFocalLength");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorShot*  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentExecutorShot(class UMoviePipeline** InMoviePipeline, class UMoviePipelineExecutorShot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentExecutorShot");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCurrentAperture(class UMoviePipeline** InMoviePipeline, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentAperture");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMoviePipeline != nullptr)
		*InMoviePipeline = Parms.InMoviePipeline;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::GetCompletionPercentage(class UMoviePipeline* InPipeline, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCompletionPercentage");

	Params::UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params Parms{};

	Parms.InPipeline = InPipeline;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InSettingType                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelinePrimaryConfig* InPrimaryConfig                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorShot*  InShot                                                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineSetting*       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(class UClass** InSettingType, class UMoviePipelinePrimaryConfig** InPrimaryConfig, class UMoviePipelineExecutorShot** InShot, class UMoviePipelineSetting* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "FindOrGetDefaultSettingForShot");

	Params::UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSettingType != nullptr)
		*InSettingType = Parms.InSettingType;

	if (InPrimaryConfig != nullptr)
		*InPrimaryConfig = Parms.InPrimaryConfig;

	if (InShot != nullptr)
		*InShot = Parms.InShot;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// class UMovieSceneSequence*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineBlueprintLibrary::DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence, class UMovieSceneSequence* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "DuplicateSequence");

	Params::UMoviePipelineBlueprintLibrary_DuplicateSequence_Params Parms{};

	Parms.Outer = Outer;
	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineColorSetting
// (None)

class UClass* UMoviePipelineColorSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineColorSetting");

	return Clss;
}


// MoviePipelineColorSetting MovieRenderPipelineCore.Default__MoviePipelineColorSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineColorSetting* UMoviePipelineColorSetting::GetDefaultObj()
{
	static class UMoviePipelineColorSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineColorSetting*>(UMoviePipelineColorSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
// (None)

class UClass* UMoviePipelineCommandLineEncoder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCommandLineEncoder");

	return Clss;
}


// MoviePipelineCommandLineEncoder MovieRenderPipelineCore.Default__MoviePipelineCommandLineEncoder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCommandLineEncoder* UMoviePipelineCommandLineEncoder::GetDefaultObj()
{
	static class UMoviePipelineCommandLineEncoder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCommandLineEncoder*>(UMoviePipelineCommandLineEncoder::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
// (None)

class UClass* UMoviePipelineCommandLineEncoderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCommandLineEncoderSettings");

	return Clss;
}


// MoviePipelineCommandLineEncoderSettings MovieRenderPipelineCore.Default__MoviePipelineCommandLineEncoderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCommandLineEncoderSettings* UMoviePipelineCommandLineEncoderSettings::GetDefaultObj()
{
	static class UMoviePipelineCommandLineEncoderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCommandLineEncoderSettings*>(UMoviePipelineCommandLineEncoderSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineConfigBase
// (None)

class UClass* UMoviePipelineConfigBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineConfigBase");

	return Clss;
}


// MoviePipelineConfigBase MovieRenderPipelineCore.Default__MoviePipelineConfigBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineConfigBase* UMoviePipelineConfigBase::GetDefaultObj()
{
	static class UMoviePipelineConfigBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineConfigBase*>(UMoviePipelineConfigBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineConfigBase*    InConfig                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineConfigBase* UMoviePipelineConfigBase::SetConfigOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "SetConfigOrigin");

	Params::UMoviePipelineConfigBase_SetConfigOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineSetting*       InSetting                                                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineSetting* UMoviePipelineConfigBase::RemoveSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "RemoveSetting");

	Params::UMoviePipelineConfigBase_RemoveSetting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineConfigBase::GetUserSettings(const TArray<class UMoviePipelineSetting*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "GetUserSettings");

	Params::UMoviePipelineConfigBase_GetUserSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineConfigBase*    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineConfigBase::GetConfigOrigin(class UMoviePipelineConfigBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "GetConfigOrigin");

	Params::UMoviePipelineConfigBase_GetConfigOrigin_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InClass                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIncludeDisabledSettings                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bExactMatch                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMoviePipelineConfigBase::FindSettingsByClass(class UClass* InClass, bool bExactMatch, const TArray<class UMoviePipelineSetting*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindSettingsByClass");

	Params::UMoviePipelineConfigBase_FindSettingsByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InClass                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIncludeDisabledSettings                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bExactMatch                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UMoviePipelineSetting*       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMoviePipelineConfigBase::FindSettingByClass(class UClass* InClass, bool bExactMatch, class UMoviePipelineSetting* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindSettingByClass");

	Params::UMoviePipelineConfigBase_FindSettingByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InClass                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIncludeDisabledSettings                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bExactMatch                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UMoviePipelineSetting*       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMoviePipelineConfigBase::FindOrAddSettingByClass(class UClass* InClass, bool bExactMatch, class UMoviePipelineSetting* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindOrAddSettingByClass");

	Params::UMoviePipelineConfigBase_FindOrAddSettingByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineConfigBase*    InConfig                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineConfigBase* UMoviePipelineConfigBase::CopyFrom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "CopyFrom");

	Params::UMoviePipelineConfigBase_CopyFrom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
// (None)

class UClass* UMoviePipelineDebugSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDebugSettings");

	return Clss;
}


// MoviePipelineDebugSettings MovieRenderPipelineCore.Default__MoviePipelineDebugSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDebugSettings* UMoviePipelineDebugSettings::GetDefaultObj()
{
	static class UMoviePipelineDebugSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDebugSettings*>(UMoviePipelineDebugSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
// (None)

class UClass* UMoviePipelineExecutorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorBase");

	return Clss;
}


// MoviePipelineExecutorBase MovieRenderPipelineCore.Default__MoviePipelineExecutorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorBase* UMoviePipelineExecutorBase::GetDefaultObj()
{
	static class UMoviePipelineExecutorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorBase*>(UMoviePipelineExecutorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

void UMoviePipelineExecutorBase::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetStatusProgress");

	Params::UMoviePipelineExecutorBase_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UMoviePipelineExecutorBase::SetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetStatusMessage");

	Params::UMoviePipelineExecutorBase_SetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InPipelineClass                                                  (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UClass* UMoviePipelineExecutorBase::SetMoviePipelineClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetMoviePipelineClass");

	Params::UMoviePipelineExecutorBase_SetMoviePipelineClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMoviePipelineExecutorBase::SendSocketMessage(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SendSocketMessage");

	Params::UMoviePipelineExecutorBase_SendSocketMessage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InURL                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InVerb                                                           (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InMessage                                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TMap<class FString, class FString> InHeaders                                                        (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TMap<class FString, class FString> UMoviePipelineExecutorBase::SendHTTPRequest(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SendHTTPRequest");

	Params::UMoviePipelineExecutorBase_SendHTTPRequest_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipelineExecutorBase::OnExecutorFinishedImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnExecutorFinishedImpl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
// (Native, Protected, BlueprintCallable)
// Parameters:
// class UMoviePipeline*              ErroredPipeline                                                  (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFatal                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ErrorReason                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FText UMoviePipelineExecutorBase::OnExecutorErroredImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnExecutorErroredImpl");

	Params::UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::OnBeginFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnBeginFrame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorBase::IsSocketConnected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "IsSocketConnected");

	Params::UMoviePipelineExecutorBase_IsSocketConnected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorBase::IsRendering(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "IsRendering");

	Params::UMoviePipelineExecutorBase_IsRendering_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorBase::GetStatusProgress(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "GetStatusProgress");

	Params::UMoviePipelineExecutorBase_GetStatusProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorBase::GetStatusMessage(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "GetStatusMessage");

	Params::UMoviePipelineExecutorBase_GetStatusMessage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*         InPipelineQueue                                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineQueue* UMoviePipelineExecutorBase::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "Execute");

	Params::UMoviePipelineExecutorBase_Execute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipelineExecutorBase::DisconnectSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "DisconnectSocket");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      InHostName                                                       (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InPort                                                           (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMoviePipelineExecutorBase::ConnectSocket(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "ConnectSocket");

	Params::UMoviePipelineExecutorBase_ConnectSocket_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::CancelCurrentJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "CancelCurrentJob");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::CancelAllJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "CancelAllJobs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
// (None)

class UClass* UMoviePipelineFCPXMLExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineFCPXMLExporter");

	return Clss;
}


// MoviePipelineFCPXMLExporter MovieRenderPipelineCore.Default__MoviePipelineFCPXMLExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineFCPXMLExporter* UMoviePipelineFCPXMLExporter::GetDefaultObj()
{
	static class UMoviePipelineFCPXMLExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineFCPXMLExporter*>(UMoviePipelineFCPXMLExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
// (None)

class UClass* UMoviePipelineGameOverrideSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineGameOverrideSetting");

	return Clss;
}


// MoviePipelineGameOverrideSetting MovieRenderPipelineCore.Default__MoviePipelineGameOverrideSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineGameOverrideSetting* UMoviePipelineGameOverrideSetting::GetDefaultObj()
{
	static class UMoviePipelineGameOverrideSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineGameOverrideSetting*>(UMoviePipelineGameOverrideSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
// (None)

class UClass* UMoviePipelineLinearExecutorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineLinearExecutorBase");

	return Clss;
}


// MoviePipelineLinearExecutorBase MovieRenderPipelineCore.Default__MoviePipelineLinearExecutorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineLinearExecutorBase* UMoviePipelineLinearExecutorBase::GetDefaultObj()
{
	static class UMoviePipelineLinearExecutorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineLinearExecutorBase*>(UMoviePipelineLinearExecutorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
// (None)

class UClass* UMoviePipelineInProcessExecutor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineInProcessExecutor");

	return Clss;
}


// MoviePipelineInProcessExecutor MovieRenderPipelineCore.Default__MoviePipelineInProcessExecutor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineInProcessExecutor* UMoviePipelineInProcessExecutor::GetDefaultObj()
{
	static class UMoviePipelineInProcessExecutor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineInProcessExecutor*>(UMoviePipelineInProcessExecutor::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
// (None)

class UClass* UMoviePipelineOutputSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineOutputSetting");

	return Clss;
}


// MoviePipelineOutputSetting MovieRenderPipelineCore.Default__MoviePipelineOutputSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineOutputSetting* UMoviePipelineOutputSetting::GetDefaultObj()
{
	static class UMoviePipelineOutputSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineOutputSetting*>(UMoviePipelineOutputSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
// (None)

class UClass* UMoviePipelinePythonHostExecutor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelinePythonHostExecutor");

	return Clss;
}


// MoviePipelinePythonHostExecutor MovieRenderPipelineCore.Default__MoviePipelinePythonHostExecutor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelinePythonHostExecutor* UMoviePipelinePythonHostExecutor::GetDefaultObj()
{
	static class UMoviePipelinePythonHostExecutor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelinePythonHostExecutor*>(UMoviePipelinePythonHostExecutor::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UWorld* UMoviePipelinePythonHostExecutor::OnMapLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "OnMapLoad");

	Params::UMoviePipelinePythonHostExecutor_OnMapLoad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelinePythonHostExecutor::GetLastLoadedWorld(class UWorld* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "GetLastLoadedWorld");

	Params::UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*         InPipelineQueue                                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineQueue* UMoviePipelinePythonHostExecutor::ExecuteDelayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "ExecuteDelayed");

	Params::UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
// (None)

class UClass* UMoviePipelineExecutorShot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorShot");

	return Clss;
}


// MoviePipelineExecutorShot MovieRenderPipelineCore.Default__MoviePipelineExecutorShot
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorShot* UMoviePipelineExecutorShot::GetDefaultObj()
{
	static class UMoviePipelineExecutorShot* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorShot*>(UMoviePipelineExecutorShot::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorShot::ShouldRender(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "ShouldRender");

	Params::UMoviePipelineExecutorShot_ShouldRender_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

void UMoviePipelineExecutorShot::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetStatusProgress");

	Params::UMoviePipelineExecutorShot_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UMoviePipelineExecutorShot::SetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetStatusMessage");

	Params::UMoviePipelineExecutorShot_SetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig*    InPreset                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::SetShotOverridePresetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetShotOverridePresetOrigin");

	Params::UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig*    InPreset                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::SetShotOverrideConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetShotOverrideConfiguration");

	Params::UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorShot::GetStatusProgress(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetStatusProgress");

	Params::UMoviePipelineExecutorShot_GetStatusProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorShot::GetStatusMessage(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetStatusMessage");

	Params::UMoviePipelineExecutorShot_GetStatusMessage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorShot::GetShotOverridePresetOrigin(class UMoviePipelineShotConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetShotOverridePresetOrigin");

	Params::UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorShot::GetShotOverrideConfiguration(class UMoviePipelineShotConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetShotOverrideConfiguration");

	Params::UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InCameraIndex                                                    (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMoviePipelineExecutorShot::GetCameraName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetCameraName");

	Params::UMoviePipelineExecutorShot_GetCameraName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InConfigType                                                     (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig(class UMoviePipelineShotConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "AllocateNewShotOverrideConfig");

	Params::UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
// (None)

class UClass* UMoviePipelineExecutorJob::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorJob");

	return Clss;
}


// MoviePipelineExecutorJob MovieRenderPipelineCore.Default__MoviePipelineExecutorJob
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorJob* UMoviePipelineExecutorJob::GetDefaultObj()
{
	static class UMoviePipelineExecutorJob* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorJob*>(UMoviePipelineExecutorJob::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

void UMoviePipelineExecutorJob::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetStatusProgress");

	Params::UMoviePipelineExecutorJob_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UMoviePipelineExecutorJob::SetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetStatusMessage");

	Params::UMoviePipelineExecutorJob_SetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)

void UMoviePipelineExecutorJob::SetSequence(const struct FSoftObjectPath& InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetSequence");

	Params::UMoviePipelineExecutorJob_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelinePrimaryConfig* InPreset                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelinePrimaryConfig* UMoviePipelineExecutorJob::SetPresetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetPresetOrigin");

	Params::UMoviePipelineExecutorJob_SetPresetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInEnabled                                                       (BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMoviePipelineExecutorJob::SetIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetIsEnabled");

	Params::UMoviePipelineExecutorJob_SetIsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInConsumed                                                      (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMoviePipelineExecutorJob::SetConsumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetConsumed");

	Params::UMoviePipelineExecutorJob_SetConsumed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelinePrimaryConfig* InPreset                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelinePrimaryConfig* UMoviePipelineExecutorJob::SetConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetConfiguration");

	Params::UMoviePipelineExecutorJob_SetConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorJob::OnDuplicated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "OnDuplicated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorJob::IsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "IsEnabled");

	Params::UMoviePipelineExecutorJob_IsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorJob::IsConsumed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "IsConsumed");

	Params::UMoviePipelineExecutorJob_IsConsumed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorJob::GetStatusProgress(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetStatusProgress");

	Params::UMoviePipelineExecutorJob_GetStatusProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorJob::GetStatusMessage(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetStatusMessage");

	Params::UMoviePipelineExecutorJob_GetStatusMessage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorJob::GetPresetOrigin(class UMoviePipelinePrimaryConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetPresetOrigin");

	Params::UMoviePipelineExecutorJob_GetPresetOrigin_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineExecutorJob::GetConfiguration(class UMoviePipelinePrimaryConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetConfiguration");

	Params::UMoviePipelineExecutorJob_GetConfiguration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineQueue
// (None)

class UClass* UMoviePipelineQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineQueue");

	return Clss;
}


// MoviePipelineQueue MovieRenderPipelineCore.Default__MoviePipelineQueue
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineQueue* UMoviePipelineQueue::GetDefaultObj()
{
	static class UMoviePipelineQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineQueue*>(UMoviePipelineQueue::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineQueue*         InConfig                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineQueue* UMoviePipelineQueue::SetQueueOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "SetQueueOrigin");

	Params::UMoviePipelineQueue_SetQueueOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UMoviePipelineQueue::SetJobIndex(class UMoviePipelineExecutorJob** InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "SetJobIndex");

	Params::UMoviePipelineQueue_SetJobIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InJob != nullptr)
		*InJob = Parms.InJob;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineQueue*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineQueue::GetQueueOrigin(class UMoviePipelineQueue* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "GetQueueOrigin");

	Params::UMoviePipelineQueue_GetQueueOrigin_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineExecutorJob*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineQueue::GetJobs(const TArray<class UMoviePipelineExecutorJob*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "GetJobs");

	Params::UMoviePipelineQueue_GetJobs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineQueue::DuplicateJob(class UMoviePipelineExecutorJob** InJob, class UMoviePipelineExecutorJob* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DuplicateJob");

	Params::UMoviePipelineQueue_DuplicateJob_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InJob != nullptr)
		*InJob = Parms.InJob;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UMoviePipelineQueue::DeleteJob(class UMoviePipelineExecutorJob** InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DeleteJob");

	Params::UMoviePipelineQueue_DeleteJob_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InJob != nullptr)
		*InJob = Parms.InJob;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineQueue::DeleteAllJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DeleteAllJobs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineQueue*         InQueue                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineQueue* UMoviePipelineQueue::CopyFrom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "CopyFrom");

	Params::UMoviePipelineQueue_CopyFrom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InJobType                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UMoviePipelineQueue::AllocateNewJob(class UMoviePipelineExecutorJob* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "AllocateNewJob");

	Params::UMoviePipelineQueue_AllocateNewJob_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
// (None)

class UClass* UMoviePipelineQueueEngineSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineQueueEngineSubsystem");

	return Clss;
}


// MoviePipelineQueueEngineSubsystem MovieRenderPipelineCore.Default__MoviePipelineQueueEngineSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineQueueEngineSubsystem* UMoviePipelineQueueEngineSubsystem::GetDefaultObj()
{
	static class UMoviePipelineQueueEngineSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineQueueEngineSubsystem*>(UMoviePipelineQueueEngineSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InProgressWidgetClass                                            (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRenderPlayerViewport                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMoviePipelineQueueEngineSubsystem::SetConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "SetConfiguration");

	Params::UMoviePipelineQueueEngineSubsystem_SetConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorBase*  InExecutor                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderQueueWithExecutorInstance");

	Params::UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InExecutorType                                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorBase*  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(class UMoviePipelineExecutorBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderQueueWithExecutor");

	Params::UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UMoviePipelineQueueEngineSubsystem::RenderJob(class UMoviePipelineExecutorJob** InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderJob");

	Params::UMoviePipelineQueueEngineSubsystem_RenderJob_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InJob != nullptr)
		*InJob = Parms.InJob;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineQueueEngineSubsystem::IsRendering(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "IsRendering");

	Params::UMoviePipelineQueueEngineSubsystem_IsRendering_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineQueue*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineQueueEngineSubsystem::GetQueue(class UMoviePipelineQueue* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "GetQueue");

	Params::UMoviePipelineQueueEngineSubsystem_GetQueue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorBase*  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineQueueEngineSubsystem::GetActiveExecutor(class UMoviePipelineExecutorBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "GetActiveExecutor");

	Params::UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineQueueEngineSubsystem::AllocateJob(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "AllocateJob");

	Params::UMoviePipelineQueueEngineSubsystem_AllocateJob_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineRenderPass
// (None)

class UClass* UMoviePipelineRenderPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineRenderPass");

	return Clss;
}


// MoviePipelineRenderPass MovieRenderPipelineCore.Default__MoviePipelineRenderPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineRenderPass* UMoviePipelineRenderPass::GetDefaultObj()
{
	static class UMoviePipelineRenderPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineRenderPass*>(UMoviePipelineRenderPass::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineShotConfig
// (None)

class UClass* UMoviePipelineShotConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineShotConfig");

	return Clss;
}


// MoviePipelineShotConfig MovieRenderPipelineCore.Default__MoviePipelineShotConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineShotConfig* UMoviePipelineShotConfig::GetDefaultObj()
{
	static class UMoviePipelineShotConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineShotConfig*>(UMoviePipelineShotConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
// (None)

class UClass* UMoviePipelineVideoOutputBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineVideoOutputBase");

	return Clss;
}


// MoviePipelineVideoOutputBase MovieRenderPipelineCore.Default__MoviePipelineVideoOutputBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineVideoOutputBase* UMoviePipelineVideoOutputBase::GetDefaultObj()
{
	static class UMoviePipelineVideoOutputBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineVideoOutputBase*>(UMoviePipelineVideoOutputBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
// (None)

class UClass* UMoviePipelinePrimaryConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelinePrimaryConfig");

	return Clss;
}


// MoviePipelinePrimaryConfig MovieRenderPipelineCore.Default__MoviePipelinePrimaryConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelinePrimaryConfig* UMoviePipelinePrimaryConfig::GetDefaultObj()
{
	static class UMoviePipelinePrimaryConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelinePrimaryConfig*>(UMoviePipelinePrimaryConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.InitializeTransientSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelinePrimaryConfig::InitializeTransientSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "InitializeTransientSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelinePrimaryConfig::GetTransientSettings(const TArray<class UMoviePipelineSetting*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "GetTransientSettings");

	Params::UMoviePipelinePrimaryConfig_GetTransientSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// struct FFrameRate                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelinePrimaryConfig::GetEffectiveFrameRate(class ULevelSequence* InSequence, const struct FFrameRate& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "GetEffectiveFrameRate");

	Params::UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeDisabledSettings                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIncludeTransientSettings                                        (Edit, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMoviePipelinePrimaryConfig::GetAllSettings(bool bIncludeTransientSettings, const TArray<class UMoviePipelineSetting*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "GetAllSettings");

	Params::UMoviePipelinePrimaryConfig_GetAllSettings_Params Parms{};

	Parms.bIncludeTransientSettings = bIncludeTransientSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


