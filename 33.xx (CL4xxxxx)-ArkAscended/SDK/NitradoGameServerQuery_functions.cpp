#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NitradoGameServerQuery.GameServerQuerySubsystem
// (None)

class UClass* UGameServerQuerySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameServerQuerySubsystem");

	return Clss;
}


// GameServerQuerySubsystem NitradoGameServerQuery.Default__GameServerQuerySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameServerQuerySubsystem* UGameServerQuerySubsystem::GetDefaultObj()
{
	static class UGameServerQuerySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameServerQuerySubsystem*>(UGameServerQuerySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGameServerQuerySubsystem::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "Start");

	Params::UGameServerQuerySubsystem_Start_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Version                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)

class FString UGameServerQuerySubsystem::SetVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetVersion");

	Params::UGameServerQuerySubsystem_SetVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

class FString UGameServerQuerySubsystem::SetUniqueID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetUniqueID");

	Params::UGameServerQuerySubsystem_SetUniqueID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TickCount                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

void UGameServerQuerySubsystem::SetTicksPerSecond(int32* TickCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetTicksPerSecond");

	Params::UGameServerQuerySubsystem_SetTicksPerSecond_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TickCount != nullptr)
		*TickCount = Parms.TickCount;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetServerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void UGameServerQuerySubsystem::SetServerName(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetServerName");

	Params::UGameServerQuerySubsystem_SetServerName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Ready                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UGameServerQuerySubsystem::SetReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetReady");

	Params::UGameServerQuerySubsystem_SetReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Count                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)

void UGameServerQuerySubsystem::SetPlayerMax(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPlayerMax");

	Params::UGameServerQuerySubsystem_SetPlayerMax_Params Parms{};

	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Count                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)

void UGameServerQuerySubsystem::SetPlayerCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPlayerCount");

	Params::UGameServerQuerySubsystem_SetPlayerCount_Params Parms{};

	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

void UGameServerQuerySubsystem::SetPasswordProtected(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPasswordProtected");

	Params::UGameServerQuerySubsystem_SetPasswordProtected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void UGameServerQuerySubsystem::SetMapName(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetMapName");

	Params::UGameServerQuerySubsystem_SetMapName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameServerQuerySubsystem::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Tag                                                              (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UGameServerQuerySubsystem::RemoveTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "RemoveTag");

	Params::UGameServerQuerySubsystem_RemoveTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPlatform               Platform                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)

enum class EPlatform UGameServerQuerySubsystem::RemovePlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "RemovePlatform");

	Params::UGameServerQuerySubsystem_RemovePlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.IncrementPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameServerQuerySubsystem::IncrementPlayerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "IncrementPlayerCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.DecrementPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameServerQuerySubsystem::DecrementPlayerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "DecrementPlayerCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Tag                                                              (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UGameServerQuerySubsystem::AddTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddTag");

	Params::UGameServerQuerySubsystem_AddTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPlatform               Platform                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)

enum class EPlatform UGameServerQuerySubsystem::AddPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddPlatform");

	Params::UGameServerQuerySubsystem_AddPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class FString                      Version                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)

class FString UGameServerQuerySubsystem::AddModInfo(class FString* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddModInfo");

	Params::UGameServerQuerySubsystem_AddModInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPortType               Type                                                             (Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
// int32                              Port                                                             (Edit, ConstParm, Net, OutParm, Transient, EditConst, GlobalConfig)
// class FString                      Address                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FString UGameServerQuerySubsystem::AddListenPortInfo(enum class EPortType Type, int32* Port)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddListenPortInfo");

	Params::UGameServerQuerySubsystem_AddListenPortInfo_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Port != nullptr)
		*Port = Parms.Port;

	return Parms.ReturnValue;

}

}


