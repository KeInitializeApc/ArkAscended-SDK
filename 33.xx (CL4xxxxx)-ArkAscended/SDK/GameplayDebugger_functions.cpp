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
// struct FVector                     InViewLocation                                                   (BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     InViewDirection                                                  (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector AGameplayDebuggerCategoryReplicator::ServerSetViewPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetViewPoint");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// bool                               bSelectInEditor                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(class AActor** Actor)
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

	return Parms.ReturnValue;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32* CategoryId, bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetCategoryEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              ExtensionId                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              HandlerId                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendExtensionInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              HandlerId                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32* CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendCategoryInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

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
// struct FGameplayDebuggerDataPackRPCParamsParams                                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

void AGameplayDebuggerCategoryReplicator::ClientDataPackPacket(const struct FGameplayDebuggerDataPackRPCParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ClientDataPackPacket");

	Params::AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


