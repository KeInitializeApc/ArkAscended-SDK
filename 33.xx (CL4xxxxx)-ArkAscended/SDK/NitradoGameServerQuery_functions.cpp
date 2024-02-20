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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGameServerQuerySubsystem::Start(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "Start");

	Params::UGameServerQuerySubsystem_Start_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Version                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)

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
// class FString                      UniqueID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

void UGameServerQuerySubsystem::SetUniqueID(const class FString& UniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetUniqueID");

	Params::UGameServerQuerySubsystem_SetUniqueID_Params Parms{};

	Parms.UniqueID = UniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TickCount                                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)

int32 UGameServerQuerySubsystem::SetTicksPerSecond()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetTicksPerSecond");

	Params::UGameServerQuerySubsystem_SetTicksPerSecond_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// bool                               Ready                                                            (ConstParm, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UGameServerQuerySubsystem::SetReady(bool* Ready)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetReady");

	Params::UGameServerQuerySubsystem_SetReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Count                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst)

int32 UGameServerQuerySubsystem::SetPlayerMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPlayerMax");

	Params::UGameServerQuerySubsystem_SetPlayerMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Count                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst)

int32 UGameServerQuerySubsystem::SetPlayerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPlayerCount");

	Params::UGameServerQuerySubsystem_SetPlayerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool UGameServerQuerySubsystem::SetPasswordProtected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPasswordProtected");

	Params::UGameServerQuerySubsystem_SetPasswordProtected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class FString                      Tag                                                              (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// enum class EPlatform               Platform                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

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
// class FString                      Tag                                                              (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// enum class EPlatform               Platform                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

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
// class FString                      Version                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)

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
// enum class EPortType               Type                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
// int32                              Port                                                             (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      Address                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UGameServerQuerySubsystem::AddListenPortInfo(enum class EPortType Type, class FString* Address)
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

	if (Address != nullptr)
		*Address = std::move(Parms.Address);

	return Parms.ReturnValue;

}

}


