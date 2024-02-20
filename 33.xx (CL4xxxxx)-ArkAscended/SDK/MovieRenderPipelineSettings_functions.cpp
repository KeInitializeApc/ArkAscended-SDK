#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
// (None)

class UClass* UMoviePipelineBurnInWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBurnInWidget");

	return Clss;
}


// MoviePipelineBurnInWidget MovieRenderPipelineSettings.Default__MoviePipelineBurnInWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBurnInWidget* UMoviePipelineBurnInWidget::GetDefaultObj()
{
	static class UMoviePipelineBurnInWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBurnInWidget*>(UMoviePipelineBurnInWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              ForPipeline                                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

class UMoviePipeline* UMoviePipelineBurnInWidget::OnOutputFrameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBurnInWidget", "OnOutputFrameStarted");

	Params::UMoviePipelineBurnInWidget_OnOutputFrameStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
// (None)

class UClass* UMoviePipelineBurnInSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBurnInSetting");

	return Clss;
}


// MoviePipelineBurnInSetting MovieRenderPipelineSettings.Default__MoviePipelineBurnInSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBurnInSetting* UMoviePipelineBurnInSetting::GetDefaultObj()
{
	static class UMoviePipelineBurnInSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBurnInSetting*>(UMoviePipelineBurnInSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
// (None)

class UClass* UMoviePipelineConsoleVariableSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineConsoleVariableSetting");

	return Clss;
}


// MoviePipelineConsoleVariableSetting MovieRenderPipelineSettings.Default__MoviePipelineConsoleVariableSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineConsoleVariableSetting* UMoviePipelineConsoleVariableSetting::GetDefaultObj()
{
	static class UMoviePipelineConsoleVariableSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineConsoleVariableSetting*>(UMoviePipelineConsoleVariableSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.UpdateConsoleVariableEnableState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// bool                               bIsEnabled                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState(class FString* Name, bool* bIsEnabled, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "UpdateConsoleVariableEnableState");

	Params::UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (bIsEnabled != nullptr)
		*bIsEnabled = Parms.bIsEnabled;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// bool                               bRemoveAllInstances                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable(class FString* Name, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "RemoveConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMoviePipelineConsoleVariableEntry>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMoviePipelineConsoleVariableSetting::GetConsoleVariables(const TArray<struct FMoviePipelineConsoleVariableEntry>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "GetConsoleVariables");

	Params::UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddOrUpdateConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable(class FString* Name, float* Value, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "AddOrUpdateConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMoviePipelineConsoleVariableSetting::AddConsoleVariable(class FString* Name, float* Value, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "AddConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
// (None)

class UClass* UMoviePipelineWidgetRenderer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineWidgetRenderer");

	return Clss;
}


// MoviePipelineWidgetRenderer MovieRenderPipelineSettings.Default__MoviePipelineWidgetRenderer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineWidgetRenderer* UMoviePipelineWidgetRenderer::GetDefaultObj()
{
	static class UMoviePipelineWidgetRenderer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineWidgetRenderer*>(UMoviePipelineWidgetRenderer::StaticClass()->DefaultObject);

	return Default;
}

}


