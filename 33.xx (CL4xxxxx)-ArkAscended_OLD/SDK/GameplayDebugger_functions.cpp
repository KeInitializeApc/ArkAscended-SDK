#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
// (Actor)

class UClass* AGameplayDebuggerCategoryReplicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerCategoryReplicator");

	return Clss;
}


// GameplayDebuggerCategoryReplicator GameplayDebugger.Default__GameplayDebuggerCategoryReplicator
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayDebuggerCategoryReplicator* AGameplayDebuggerCategoryReplicator::GetDefaultObj()
{
	static class AGameplayDebuggerCategoryReplicator* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayDebuggerCategoryReplicator*>(AGameplayDebuggerCategoryReplicator::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                     InViewLocation                                                   (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     InViewDirection                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void AGameplayDebuggerCategoryReplicator::ServerSetViewPoint(struct FVector* InViewLocation, struct FVector* InViewDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetViewPoint");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InViewLocation != nullptr)
		*InViewLocation = std::move(Parms.InViewLocation);

	if (InViewDirection != nullptr)
		*InViewDirection = std::move(Parms.InViewDirection);

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                               bEnable                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

bool AGameplayDebuggerCategoryReplicator::ServerSetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// bool                               bSelectInEditor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(class AActor** Actor, bool* bSelectInEditor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetDebugActor");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (bSelectInEditor != nullptr)
		*bSelectInEditor = Parms.bSelectInEditor;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bEnable                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

bool AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetCategoryEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              ExtensionId                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              HandlerId                                                        (Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32* ExtensionId, int32* HandlerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendExtensionInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExtensionId != nullptr)
		*ExtensionId = Parms.ExtensionId;

	if (HandlerId != nullptr)
		*HandlerId = Parms.HandlerId;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              HandlerId                                                        (Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32* HandlerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendCategoryInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HandlerId != nullptr)
		*HandlerId = Parms.HandlerId;

	return Parms.ReturnValue;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AGameplayDebuggerCategoryReplicator::ServerResetViewPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerResetViewPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
// (Final, Native, Protected)
// Parameters:

void AGameplayDebuggerCategoryReplicator::OnRep_ReplicatedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "OnRep_ReplicatedData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayDebuggerDataPackRPCParamsParams                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

struct FGameplayDebuggerDataPackRPCParams AGameplayDebuggerCategoryReplicator::ClientDataPackPacket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ClientDataPackPacket");

	Params::AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayDebugger.GameplayDebuggerConfig
// (None)

class UClass* UGameplayDebuggerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerConfig");

	return Clss;
}


// GameplayDebuggerConfig GameplayDebugger.Default__GameplayDebuggerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerConfig* UGameplayDebuggerConfig::GetDefaultObj()
{
	static class UGameplayDebuggerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerConfig*>(UGameplayDebuggerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerUserSettings
// (None)

class UClass* UGameplayDebuggerUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerUserSettings");

	return Clss;
}


// GameplayDebuggerUserSettings GameplayDebugger.Default__GameplayDebuggerUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerUserSettings* UGameplayDebuggerUserSettings::GetDefaultObj()
{
	static class UGameplayDebuggerUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerUserSettings*>(UGameplayDebuggerUserSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerLocalController
// (None)

class UClass* UGameplayDebuggerLocalController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerLocalController");

	return Clss;
}


// GameplayDebuggerLocalController GameplayDebugger.Default__GameplayDebuggerLocalController
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerLocalController* UGameplayDebuggerLocalController::GetDefaultObj()
{
	static class UGameplayDebuggerLocalController* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerLocalController*>(UGameplayDebuggerLocalController::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerPlayerManager
// (Actor)

class UClass* AGameplayDebuggerPlayerManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerPlayerManager");

	return Clss;
}


// GameplayDebuggerPlayerManager GameplayDebugger.Default__GameplayDebuggerPlayerManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayDebuggerPlayerManager* AGameplayDebuggerPlayerManager::GetDefaultObj()
{
	static class AGameplayDebuggerPlayerManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayDebuggerPlayerManager*>(AGameplayDebuggerPlayerManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGameplayDebuggerRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerRenderingComponent");

	return Clss;
}


// GameplayDebuggerRenderingComponent GameplayDebugger.Default__GameplayDebuggerRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerRenderingComponent* UGameplayDebuggerRenderingComponent::GetDefaultObj()
{
	static class UGameplayDebuggerRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerRenderingComponent*>(UGameplayDebuggerRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}

}


