#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuFolderButton.CheatMenuFolderButton_C
// (None)

class UClass* UCheatMenuFolderButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuFolderButton_C");

	return Clss;
}


// CheatMenuFolderButton_C CheatMenuFolderButton.Default__CheatMenuFolderButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuFolderButton_C* UCheatMenuFolderButton_C::GetDefaultObj()
{
	static class UCheatMenuFolderButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuFolderButton_C*>(UCheatMenuFolderButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuFolderButton.CheatMenuFolderButton_C.SetFolder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FolderName                                                       (ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              ScreenNumber                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FString UCheatMenuFolderButton_C::SetFolder(class FText FolderName, int32 ScreenNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "SetFolder");

	Params::UCheatMenuFolderButton_C_SetFolder_Params Parms{};

	Parms.FolderName = FolderName;
	Parms.ScreenNumber = ScreenNumber;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenuFolderButton.CheatMenuFolderButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuFolderButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuFolderButton.CheatMenuFolderButton_C.ExecuteUbergraph_CheatMenuFolderButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UCheatMenuFolderButton_C::ExecuteUbergraph_CheatMenuFolderButton(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "ExecuteUbergraph_CheatMenuFolderButton");

	Params::UCheatMenuFolderButton_C_ExecuteUbergraph_CheatMenuFolderButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


