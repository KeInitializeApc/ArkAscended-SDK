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
// class UMoviePipeline*              ForPipeline                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMoviePipelineBurnInWidget::OnOutputFrameStarted(class UMoviePipeline* ForPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBurnInWidget", "OnOutputFrameStarted");

	Params::UMoviePipelineBurnInWidget_OnOutputFrameStarted_Params Parms{};

	Parms.ForPipeline = ForPipeline;

	UObject::ProcessEvent(Func, &Parms);

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
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState(class FString* Name, bool ReturnValue)
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

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// bool                               bRemoveAllInstances                                              (Edit, ExportObject, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable(class FString* Name, bool bRemoveAllInstances, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "RemoveConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Params Parms{};

	Parms.bRemoveAllInstances = bRemoveAllInstances;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMoviePipelineConsoleVariableEntry>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable(class FString* Name, float Value, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "AddOrUpdateConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMoviePipelineConsoleVariableSetting::AddConsoleVariable(class FString* Name, float Value, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "AddConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

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


