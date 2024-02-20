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
// class FText                        FolderName                                                       (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              ScreenNumber                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UTexture2D* UCheatMenuFolderButton_C::SetFolder(class FText FolderName, int32* ScreenNumber, class FString* CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "SetFolder");

	Params::UCheatMenuFolderButton_C_SetFolder_Params Parms{};

	Parms.FolderName = FolderName;

	UObject::ProcessEvent(Func, &Parms);

	if (ScreenNumber != nullptr)
		*ScreenNumber = Parms.ScreenNumber;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

int32 UCheatMenuFolderButton_C::ExecuteUbergraph_CheatMenuFolderButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "ExecuteUbergraph_CheatMenuFolderButton");

	Params::UCheatMenuFolderButton_C_ExecuteUbergraph_CheatMenuFolderButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


