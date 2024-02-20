#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// (None)

class UClass* UAchievementBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementBlueprintLibrary");

	return Clss;
}


// AchievementBlueprintLibrary OnlineSubsystemUtils.Default__AchievementBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAchievementBlueprintLibrary* UAchievementBlueprintLibrary::GetDefaultObj()
{
	static class UAchievementBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementBlueprintLibrary*>(UAchievementBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FName                        AchievementID                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bFoundID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              Progress                                                         (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)

class UObject* UAchievementBlueprintLibrary::GetCachedAchievementProgress(class APlayerController** PlayerController, class FName AchievementID, bool bFoundID, float* Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementProgress");

	Params::UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params Parms{};

	Parms.AchievementID = AchievementID;
	Parms.bFoundID = bFoundID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FName                        AchievementID                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bFoundID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FText                        Title                                                            (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class FText                        LockedDescription                                                (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FText                        UnlockedDescription                                              (Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bHidden                                                          (BlueprintVisible, EditFixedSize, ZeroConstructor, Config)

class UObject* UAchievementBlueprintLibrary::GetCachedAchievementDescription(class APlayerController** PlayerController, class FName AchievementID, bool bFoundID, class FText Title, class FText LockedDescription, class FText UnlockedDescription, bool bHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementDescription");

	Params::UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params Parms{};

	Parms.AchievementID = AchievementID;
	Parms.bFoundID = bFoundID;
	Parms.Title = Title;
	Parms.LockedDescription = LockedDescription;
	Parms.UnlockedDescription = UnlockedDescription;
	Parms.bHidden = bHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// (None)

class UClass* UAchievementQueryCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementQueryCallbackProxy");

	return Clss;
}


// AchievementQueryCallbackProxy OnlineSubsystemUtils.Default__AchievementQueryCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::GetDefaultObj()
{
	static class UAchievementQueryCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementQueryCallbackProxy*>(UAchievementQueryCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UAchievementQueryCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UAchievementQueryCallbackProxy::CacheAchievements(class APlayerController** PlayerController, class UAchievementQueryCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementQueryCallbackProxy", "CacheAchievements");

	Params::UAchievementQueryCallbackProxy_CacheAchievements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UAchievementQueryCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class APlayerController** PlayerController, class UAchievementQueryCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementQueryCallbackProxy", "CacheAchievementDescriptions");

	Params::UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// (None)

class UClass* UAchievementWriteCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementWriteCallbackProxy");

	return Clss;
}


// AchievementWriteCallbackProxy OnlineSubsystemUtils.Default__AchievementWriteCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::GetDefaultObj()
{
	static class UAchievementWriteCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementWriteCallbackProxy*>(UAchievementWriteCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FName                        AchievementName                                                  (ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Progress                                                         (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// int32                              UserTag                                                          (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UAchievementWriteCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UAchievementWriteCallbackProxy::WriteAchievementProgress(class APlayerController** PlayerController, class FName AchievementName, float* Progress, int32* UserTag, class UAchievementWriteCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementWriteCallbackProxy", "WriteAchievementProgress");

	Params::UAchievementWriteCallbackProxy_WriteAchievementProgress_Params Parms{};

	Parms.AchievementName = AchievementName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	if (UserTag != nullptr)
		*UserTag = Parms.UserTag;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// (None)

class UClass* UConnectionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConnectionCallbackProxy");

	return Clss;
}


// ConnectionCallbackProxy OnlineSubsystemUtils.Default__ConnectionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UConnectionCallbackProxy* UConnectionCallbackProxy::GetDefaultObj()
{
	static class UConnectionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UConnectionCallbackProxy*>(UConnectionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UConnectionCallbackProxy*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UConnectionCallbackProxy::ConnectToService(class APlayerController** PlayerController, class UConnectionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConnectionCallbackProxy", "ConnectToService");

	Params::UConnectionCallbackProxy_ConnectToService_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// (None)

class UClass* UCreateSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreateSessionCallbackProxy");

	return Clss;
}


// CreateSessionCallbackProxy OnlineSubsystemUtils.Default__CreateSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::GetDefaultObj()
{
	static class UCreateSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreateSessionCallbackProxy*>(UCreateSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// int32                              PublicConnections                                                (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bUseLAN                                                          (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UCreateSessionCallbackProxy* ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UCreateSessionCallbackProxy::CreateSession(class APlayerController** PlayerController, int32 PublicConnections, bool bUseLAN, class UCreateSessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateSessionCallbackProxy", "CreateSession");

	Params::UCreateSessionCallbackProxy_CreateSession_Params Parms{};

	Parms.PublicConnections = PublicConnections;
	Parms.bUseLAN = bUseLAN;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// (None)

class UClass* UDestroySessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestroySessionCallbackProxy");

	return Clss;
}


// DestroySessionCallbackProxy OnlineSubsystemUtils.Default__DestroySessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::GetDefaultObj()
{
	static class UDestroySessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UDestroySessionCallbackProxy*>(UDestroySessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UDestroySessionCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UDestroySessionCallbackProxy::DestroySession(class APlayerController** PlayerController, class UDestroySessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestroySessionCallbackProxy", "DestroySession");

	Params::UDestroySessionCallbackProxy_DestroySession_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// (None)

class UClass* UEndMatchCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndMatchCallbackProxy");

	return Clss;
}


// EndMatchCallbackProxy OnlineSubsystemUtils.Default__EndMatchCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UEndMatchCallbackProxy* UEndMatchCallbackProxy::GetDefaultObj()
{
	static class UEndMatchCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndMatchCallbackProxy*>(UEndMatchCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// TScriptInterface<class ITurnBasedMatchInterface>MatchActor                                                       (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FString                      MatchID                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// enum class EMPMatchOutcome         LocalPlayerOutcome                                               (Edit, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EMPMatchOutcome         OtherPlayersOutcome                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UEndMatchCallbackProxy*      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UEndMatchCallbackProxy::EndMatch(class APlayerController** PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome, class UEndMatchCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndMatchCallbackProxy", "EndMatch");

	Params::UEndMatchCallbackProxy_EndMatch_Params Parms{};

	Parms.MatchActor = MatchActor;
	Parms.MatchID = MatchID;
	Parms.LocalPlayerOutcome = LocalPlayerOutcome;
	Parms.OtherPlayersOutcome = OtherPlayersOutcome;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// (None)

class UClass* UEndTurnCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndTurnCallbackProxy");

	return Clss;
}


// EndTurnCallbackProxy OnlineSubsystemUtils.Default__EndTurnCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UEndTurnCallbackProxy* UEndTurnCallbackProxy::GetDefaultObj()
{
	static class UEndTurnCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndTurnCallbackProxy*>(UEndTurnCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FString                      MatchID                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// TScriptInterface<class ITurnBasedMatchInterface>TurnBasedMatchInterface                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UEndTurnCallbackProxy*       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TScriptInterface<class ITurnBasedMatchInterface> UEndTurnCallbackProxy::EndTurn(class APlayerController** PlayerController, const class FString& MatchID, class UEndTurnCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndTurnCallbackProxy", "EndTurn");

	Params::UEndTurnCallbackProxy_EndTurn_Params Parms{};

	Parms.MatchID = MatchID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// (None)

class UClass* UFindSessionsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FindSessionsCallbackProxy");

	return Clss;
}


// FindSessionsCallbackProxy OnlineSubsystemUtils.Default__FindSessionsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::GetDefaultObj()
{
	static class UFindSessionsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFindSessionsCallbackProxy*>(UFindSessionsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlueprintSessionResult UFindSessionsCallbackProxy::GetServerName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetServerName");

	Params::UFindSessionsCallbackProxy_GetServerName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlueprintSessionResult UFindSessionsCallbackProxy::GetPingInMs(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetPingInMs");

	Params::UFindSessionsCallbackProxy_GetPingInMs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlueprintSessionResult UFindSessionsCallbackProxy::GetMaxPlayers(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetMaxPlayers");

	Params::UFindSessionsCallbackProxy_GetMaxPlayers_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlueprintSessionResult UFindSessionsCallbackProxy::GetCurrentPlayers(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetCurrentPlayers");

	Params::UFindSessionsCallbackProxy_GetCurrentPlayers_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// int32                              MaxResults                                                       (Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bUseLAN                                                          (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UFindSessionsCallbackProxy*  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UFindSessionsCallbackProxy::FindSessions(class APlayerController** PlayerController, int32 MaxResults, bool bUseLAN, class UFindSessionsCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "FindSessions");

	Params::UFindSessionsCallbackProxy_FindSessions_Params Parms{};

	Parms.MaxResults = MaxResults;
	Parms.bUseLAN = bUseLAN;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// (None)

class UClass* UFindTurnBasedMatchCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FindTurnBasedMatchCallbackProxy");

	return Clss;
}


// FindTurnBasedMatchCallbackProxy OnlineSubsystemUtils.Default__FindTurnBasedMatchCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::GetDefaultObj()
{
	static class UFindTurnBasedMatchCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFindTurnBasedMatchCallbackProxy*>(UFindTurnBasedMatchCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// TScriptInterface<class ITurnBasedMatchInterface>MatchActor                                                       (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MinPlayers                                                       (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MaxPlayers                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              PlayerGroup                                                      (ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ShowExistingMatches                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UFindTurnBasedMatchCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class APlayerController** PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32* MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches, class UFindTurnBasedMatchCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindTurnBasedMatchCallbackProxy", "FindTurnBasedMatch");

	Params::UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params Parms{};

	Parms.MatchActor = MatchActor;
	Parms.MinPlayers = MinPlayers;
	Parms.PlayerGroup = PlayerGroup;
	Parms.ShowExistingMatches = ShowExistingMatches;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (MaxPlayers != nullptr)
		*MaxPlayers = Parms.MaxPlayers;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// (None)

class UClass* UInAppPurchaseCallbackProxy2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InAppPurchaseCallbackProxy2");

	return Clss;
}


// InAppPurchaseCallbackProxy2 OnlineSubsystemUtils.Default__InAppPurchaseCallbackProxy2
// (Public, ClassDefaultObject, ArchetypeObject)

class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::GetDefaultObj()
{
	static class UInAppPurchaseCallbackProxy2* Default = nullptr;

	if (!Default)
		Default = static_cast<UInAppPurchaseCallbackProxy2*>(UInAppPurchaseCallbackProxy2::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController** PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseUnprocessedPurchases");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController** PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseQueryOwned");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// struct FInAppPurchaseProductRequest2ProductRequest                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(class APlayerController** PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest, class UInAppPurchaseCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchase");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params Parms{};

	Parms.ProductRequest = ProductRequest;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// (None)

class UClass* UInAppPurchaseQueryCallbackProxy2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InAppPurchaseQueryCallbackProxy2");

	return Clss;
}


// InAppPurchaseQueryCallbackProxy2 OnlineSubsystemUtils.Default__InAppPurchaseQueryCallbackProxy2
// (Public, ClassDefaultObject, ArchetypeObject)

class UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::GetDefaultObj()
{
	static class UInAppPurchaseQueryCallbackProxy2* Default = nullptr;

	if (!Default)
		Default = static_cast<UInAppPurchaseQueryCallbackProxy2*>(UInAppPurchaseQueryCallbackProxy2::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// TArray<class FString>              ProductIdentifiers                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UInAppPurchaseQueryCallbackProxy2*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(class APlayerController** PlayerController, const TArray<class FString>& ProductIdentifiers, class UInAppPurchaseQueryCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseQueryCallbackProxy2", "CreateProxyObjectForInAppPurchaseQuery");

	Params::UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params Parms{};

	Parms.ProductIdentifiers = ProductIdentifiers;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// (None)

class UClass* UInAppPurchaseRestoreCallbackProxy2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InAppPurchaseRestoreCallbackProxy2");

	return Clss;
}


// InAppPurchaseRestoreCallbackProxy2 OnlineSubsystemUtils.Default__InAppPurchaseRestoreCallbackProxy2
// (Public, ClassDefaultObject, ArchetypeObject)

class UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::GetDefaultObj()
{
	static class UInAppPurchaseRestoreCallbackProxy2* Default = nullptr;

	if (!Default)
		Default = static_cast<UInAppPurchaseRestoreCallbackProxy2*>(UInAppPurchaseRestoreCallbackProxy2::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest2>ConsumableProductFlags                                           (Edit, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UInAppPurchaseRestoreCallbackProxy2*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(const TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController** PlayerController, class UInAppPurchaseRestoreCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseRestoreCallbackProxy2", "CreateProxyObjectForInAppPurchaseRestore");

	Params::UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params Parms{};

	Parms.ConsumableProductFlags = ConsumableProductFlags;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Class OnlineSubsystemUtils.IpConnection
// (None)

class UClass* UIpConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IpConnection");

	return Clss;
}


// IpConnection OnlineSubsystemUtils.Default__IpConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UIpConnection* UIpConnection::GetDefaultObj()
{
	static class UIpConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UIpConnection*>(UIpConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.IpNetDriver
// (None)

class UClass* UIpNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IpNetDriver");

	return Clss;
}


// IpNetDriver OnlineSubsystemUtils.Default__IpNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UIpNetDriver* UIpNetDriver::GetDefaultObj()
{
	static class UIpNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIpNetDriver*>(UIpNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// (None)

class UClass* UJoinSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinSessionCallbackProxy");

	return Clss;
}


// JoinSessionCallbackProxy OnlineSubsystemUtils.Default__JoinSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::GetDefaultObj()
{
	static class UJoinSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinSessionCallbackProxy*>(UJoinSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// struct FBlueprintSessionResult     SearchResult                                                     (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UJoinSessionCallbackProxy*   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UJoinSessionCallbackProxy::JoinSession(class APlayerController** PlayerController, const struct FBlueprintSessionResult& SearchResult, class UJoinSessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinSessionCallbackProxy", "JoinSession");

	Params::UJoinSessionCallbackProxy_JoinSession_Params Parms{};

	Parms.SearchResult = SearchResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// (None)

class UClass* ULeaderboardBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardBlueprintLibrary");

	return Clss;
}


// LeaderboardBlueprintLibrary OnlineSubsystemUtils.Default__LeaderboardBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULeaderboardBlueprintLibrary* ULeaderboardBlueprintLibrary::GetDefaultObj()
{
	static class ULeaderboardBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardBlueprintLibrary*>(ULeaderboardBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FName                        StatName                                                         (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              StatValue                                                        (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController** PlayerController, int32 StatValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardBlueprintLibrary", "WriteLeaderboardInteger");

	Params::ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params Parms{};

	Parms.StatValue = StatValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// (None)

class UClass* ULeaderboardFlushCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardFlushCallbackProxy");

	return Clss;
}


// LeaderboardFlushCallbackProxy OnlineSubsystemUtils.Default__LeaderboardFlushCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::GetDefaultObj()
{
	static class ULeaderboardFlushCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardFlushCallbackProxy*>(ULeaderboardFlushCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
// class ULeaderboardFlushCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController** PlayerController, class FName SessionName, class ULeaderboardFlushCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardFlushCallbackProxy", "CreateProxyObjectForFlush");

	Params::ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// (None)

class UClass* ULeaderboardQueryCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardQueryCallbackProxy");

	return Clss;
}


// LeaderboardQueryCallbackProxy OnlineSubsystemUtils.Default__LeaderboardQueryCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::GetDefaultObj()
{
	static class ULeaderboardQueryCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardQueryCallbackProxy*>(ULeaderboardQueryCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FName                        StatName                                                         (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class ULeaderboardQueryCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController** PlayerController, class ULeaderboardQueryCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardQueryCallbackProxy", "CreateProxyObjectForIntQuery");

	Params::ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// (None)

class UClass* ULogoutCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LogoutCallbackProxy");

	return Clss;
}


// LogoutCallbackProxy OnlineSubsystemUtils.Default__LogoutCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ULogoutCallbackProxy* ULogoutCallbackProxy::GetDefaultObj()
{
	static class ULogoutCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULogoutCallbackProxy*>(ULogoutCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class ULogoutCallbackProxy*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ULogoutCallbackProxy::Logout(class APlayerController** PlayerController, class ULogoutCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LogoutCallbackProxy", "Logout");

	Params::ULogoutCallbackProxy_Logout_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.OnlineBeacon
// (Actor)

class UClass* AOnlineBeacon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeacon");

	return Clss;
}


// OnlineBeacon OnlineSubsystemUtils.Default__OnlineBeacon
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeacon* AOnlineBeacon::GetDefaultObj()
{
	static class AOnlineBeacon* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeacon*>(AOnlineBeacon::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineBeaconClient
// (Actor)

class UClass* AOnlineBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconClient");

	return Clss;
}


// OnlineBeaconClient OnlineSubsystemUtils.Default__OnlineBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeaconClient* AOnlineBeaconClient::GetDefaultObj()
{
	static class AOnlineBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeaconClient*>(AOnlineBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void AOnlineBeaconClient::ClientOnConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineBeaconClient", "ClientOnConnected");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.OnlineBeaconHost
// (Actor)

class UClass* AOnlineBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconHost");

	return Clss;
}


// OnlineBeaconHost OnlineSubsystemUtils.Default__OnlineBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeaconHost* AOnlineBeaconHost::GetDefaultObj()
{
	static class AOnlineBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeaconHost*>(AOnlineBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// (Actor)

class UClass* AOnlineBeaconHostObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconHostObject");

	return Clss;
}


// OnlineBeaconHostObject OnlineSubsystemUtils.Default__OnlineBeaconHostObject
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeaconHostObject* AOnlineBeaconHostObject::GetDefaultObj()
{
	static class AOnlineBeaconHostObject* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeaconHostObject*>(AOnlineBeaconHostObject::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// (None)

class UClass* UOnlineEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineEngineInterfaceImpl");

	return Clss;
}


// OnlineEngineInterfaceImpl OnlineSubsystemUtils.Default__OnlineEngineInterfaceImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineEngineInterfaceImpl* UOnlineEngineInterfaceImpl::GetDefaultObj()
{
	static class UOnlineEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineEngineInterfaceImpl*>(UOnlineEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlinePIESettings
// (None)

class UClass* UOnlinePIESettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlinePIESettings");

	return Clss;
}


// OnlinePIESettings OnlineSubsystemUtils.Default__OnlinePIESettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlinePIESettings* UOnlinePIESettings::GetDefaultObj()
{
	static class UOnlinePIESettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlinePIESettings*>(UOnlinePIESettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
// (None)

class UClass* UOnlineServicesEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineServicesEngineInterfaceImpl");

	return Clss;
}


// OnlineServicesEngineInterfaceImpl OnlineSubsystemUtils.Default__OnlineServicesEngineInterfaceImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineServicesEngineInterfaceImpl* UOnlineServicesEngineInterfaceImpl::GetDefaultObj()
{
	static class UOnlineServicesEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineServicesEngineInterfaceImpl*>(UOnlineServicesEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineSessionClient
// (None)

class UClass* UOnlineSessionClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSessionClient");

	return Clss;
}


// OnlineSessionClient OnlineSubsystemUtils.Default__OnlineSessionClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSessionClient* UOnlineSessionClient::GetDefaultObj()
{
	static class UOnlineSessionClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSessionClient*>(UOnlineSessionClient::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.PartyBeaconClient
// (Actor)

class UClass* APartyBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyBeaconClient");

	return Clss;
}


// PartyBeaconClient OnlineSubsystemUtils.Default__PartyBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class APartyBeaconClient* APartyBeaconClient::GetDefaultObj()
{
	static class APartyBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<APartyBeaconClient*>(APartyBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FPartyReservation           ReservationUpdate                                                (Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class FString APartyBeaconClient::ServerUpdateReservationRequest(const struct FPartyReservation& ReservationUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerUpdateReservationRequest");

	Params::APartyBeaconClient_ServerUpdateReservationRequest_Params Parms{};

	Parms.ReservationUpdate = ReservationUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FPartyReservation           Reservation                                                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class FString APartyBeaconClient::ServerReservationRequest(const struct FPartyReservation& Reservation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerReservationRequest");

	Params::APartyBeaconClient_ServerReservationRequest_Params Parms{};

	Parms.Reservation = Reservation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FPartyReservation           ReservationUpdate                                                (Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class FString APartyBeaconClient::ServerRemoveMemberFromReservationRequest(const struct FPartyReservation& ReservationUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerRemoveMemberFromReservationRequest");

	Params::APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params Parms{};

	Parms.ReservationUpdate = ReservationUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            PartyLeader                                                      (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FUniqueNetIdRepl APartyBeaconClient::ServerCancelReservationRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerCancelReservationRequest");

	Params::APartyBeaconClient_ServerCancelReservationRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FPartyReservation           Reservation                                                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class FString APartyBeaconClient::ServerAddOrUpdateReservationRequest(const struct FPartyReservation& Reservation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerAddOrUpdateReservationRequest");

	Params::APartyBeaconClient_ServerAddOrUpdateReservationRequest_Params Parms{};

	Parms.Reservation = Reservation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int32                              NumRemainingReservations                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void APartyBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientSendReservationUpdates");

	Params::APartyBeaconClient_ClientSendReservationUpdates_Params Parms{};

	Parms.NumRemainingReservations = NumRemainingReservations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void APartyBeaconClient::ClientSendReservationFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientSendReservationFull");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EPartyReservationResult ReservationResponse                                              (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void APartyBeaconClient::ClientReservationResponse(enum class EPartyReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientReservationResponse");

	Params::APartyBeaconClient_ClientReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EPartyReservationResult ReservationResponse                                              (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void APartyBeaconClient::ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientCancelReservationResponse");

	Params::APartyBeaconClient_ClientCancelReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.PartyBeaconHost
// (Actor)

class UClass* APartyBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyBeaconHost");

	return Clss;
}


// PartyBeaconHost OnlineSubsystemUtils.Default__PartyBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class APartyBeaconHost* APartyBeaconHost::GetDefaultObj()
{
	static class APartyBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<APartyBeaconHost*>(APartyBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.PartyBeaconState
// (None)

class UClass* UPartyBeaconState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyBeaconState");

	return Clss;
}


// PartyBeaconState OnlineSubsystemUtils.Default__PartyBeaconState
// (Public, ClassDefaultObject, ArchetypeObject)

class UPartyBeaconState* UPartyBeaconState::GetDefaultObj()
{
	static class UPartyBeaconState* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyBeaconState*>(UPartyBeaconState::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// (None)

class UClass* UQuitMatchCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuitMatchCallbackProxy");

	return Clss;
}


// QuitMatchCallbackProxy OnlineSubsystemUtils.Default__QuitMatchCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::GetDefaultObj()
{
	static class UQuitMatchCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuitMatchCallbackProxy*>(UQuitMatchCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FString                      MatchID                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// enum class EMPMatchOutcome         Outcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TurnTimeoutInSeconds                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UQuitMatchCallbackProxy*     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuitMatchCallbackProxy::QuitMatch(class APlayerController** PlayerController, const class FString& MatchID, enum class EMPMatchOutcome* Outcome, int32* TurnTimeoutInSeconds, class UQuitMatchCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitMatchCallbackProxy", "QuitMatch");

	Params::UQuitMatchCallbackProxy_QuitMatch_Params Parms{};

	Parms.MatchID = MatchID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	if (TurnTimeoutInSeconds != nullptr)
		*TurnTimeoutInSeconds = Parms.TurnTimeoutInSeconds;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// (None)

class UClass* UShowLoginUICallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowLoginUICallbackProxy");

	return Clss;
}


// ShowLoginUICallbackProxy OnlineSubsystemUtils.Default__ShowLoginUICallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::GetDefaultObj()
{
	static class UShowLoginUICallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowLoginUICallbackProxy*>(UShowLoginUICallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           InPlayerController                                               (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UShowLoginUICallbackProxy*   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UShowLoginUICallbackProxy::ShowExternalLoginUI(class APlayerController** InPlayerController, class UShowLoginUICallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowLoginUICallbackProxy", "ShowExternalLoginUI");

	Params::UShowLoginUICallbackProxy_ShowExternalLoginUI_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPlayerController != nullptr)
		*InPlayerController = Parms.InPlayerController;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.SpectatorBeaconClient
// (Actor)

class UClass* ASpectatorBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpectatorBeaconClient");

	return Clss;
}


// SpectatorBeaconClient OnlineSubsystemUtils.Default__SpectatorBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpectatorBeaconClient* ASpectatorBeaconClient::GetDefaultObj()
{
	static class ASpectatorBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpectatorBeaconClient*>(ASpectatorBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSpectatorReservation       Reservation                                                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class FString ASpectatorBeaconClient::ServerReservationRequest(const struct FSpectatorReservation& Reservation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ServerReservationRequest");

	Params::ASpectatorBeaconClient_ServerReservationRequest_Params Parms{};

	Parms.Reservation = Reservation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            Spectator                                                        (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FUniqueNetIdRepl ASpectatorBeaconClient::ServerCancelReservationRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ServerCancelReservationRequest");

	Params::ASpectatorBeaconClient_ServerCancelReservationRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int32                              NumRemainingReservations                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void ASpectatorBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientSendReservationUpdates");

	Params::ASpectatorBeaconClient_ClientSendReservationUpdates_Params Parms{};

	Parms.NumRemainingReservations = NumRemainingReservations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ASpectatorBeaconClient::ClientSendReservationFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientSendReservationFull");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class ESpectatorReservationResultReservationResponse                                              (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void ASpectatorBeaconClient::ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientReservationResponse");

	Params::ASpectatorBeaconClient_ClientReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class ESpectatorReservationResultReservationResponse                                              (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void ASpectatorBeaconClient::ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientCancelReservationResponse");

	Params::ASpectatorBeaconClient_ClientCancelReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.SpectatorBeaconHost
// (Actor)

class UClass* ASpectatorBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpectatorBeaconHost");

	return Clss;
}


// SpectatorBeaconHost OnlineSubsystemUtils.Default__SpectatorBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpectatorBeaconHost* ASpectatorBeaconHost::GetDefaultObj()
{
	static class ASpectatorBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpectatorBeaconHost*>(ASpectatorBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.SpectatorBeaconState
// (None)

class UClass* USpectatorBeaconState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpectatorBeaconState");

	return Clss;
}


// SpectatorBeaconState OnlineSubsystemUtils.Default__SpectatorBeaconState
// (Public, ClassDefaultObject, ArchetypeObject)

class USpectatorBeaconState* USpectatorBeaconState::GetDefaultObj()
{
	static class USpectatorBeaconState* Default = nullptr;

	if (!Default)
		Default = static_cast<USpectatorBeaconState*>(USpectatorBeaconState::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.TestBeaconClient
// (Actor)

class UClass* ATestBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestBeaconClient");

	return Clss;
}


// TestBeaconClient OnlineSubsystemUtils.Default__TestBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ATestBeaconClient* ATestBeaconClient::GetDefaultObj()
{
	static class ATestBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ATestBeaconClient*>(ATestBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void ATestBeaconClient::ServerPong()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestBeaconClient", "ServerPong");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ATestBeaconClient::ClientPing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestBeaconClient", "ClientPing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.TestBeaconHost
// (Actor)

class UClass* ATestBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestBeaconHost");

	return Clss;
}


// TestBeaconHost OnlineSubsystemUtils.Default__TestBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ATestBeaconHost* ATestBeaconHost::GetDefaultObj()
{
	static class ATestBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ATestBeaconHost*>(ATestBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// (None)

class UClass* UTurnBasedBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TurnBasedBlueprintLibrary");

	return Clss;
}


// TurnBasedBlueprintLibrary OnlineSubsystemUtils.Default__TurnBasedBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTurnBasedBlueprintLibrary* UTurnBasedBlueprintLibrary::GetDefaultObj()
{
	static class UTurnBasedBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTurnBasedBlueprintLibrary*>(UTurnBasedBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

class UObject* UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class APlayerController** PlayerController, class UObject** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "RegisterTurnBasedMatchInterfaceObject");

	Params::UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (Object != nullptr)
		*Object = Parms.Object;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FString                      MatchID                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FString                      PlayerDisplayName                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class UObject* UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class APlayerController** PlayerController, const class FString& MatchID, int32* PlayerIndex, class FString* PlayerDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetPlayerDisplayName");

	Params::UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params Parms{};

	Parms.MatchID = MatchID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = std::move(Parms.PlayerDisplayName);

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FString                      MatchID                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class UObject* UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class APlayerController** PlayerController, const class FString& MatchID, int32* PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetMyPlayerIndex");

	Params::UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params Parms{};

	Parms.MatchID = MatchID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class FString                      MatchID                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// bool                               bIsMyTurn                                                        (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class UObject* UTurnBasedBlueprintLibrary::GetIsMyTurn(class APlayerController** PlayerController, const class FString& MatchID, bool* bIsMyTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetIsMyTurn");

	Params::UTurnBasedBlueprintLibrary_GetIsMyTurn_Params Parms{};

	Parms.MatchID = MatchID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = Parms.bIsMyTurn;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// (SceneComponent)

class UClass* UVoipListenerSynthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoipListenerSynthComponent");

	return Clss;
}


// VoipListenerSynthComponent OnlineSubsystemUtils.Default__VoipListenerSynthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoipListenerSynthComponent* UVoipListenerSynthComponent::GetDefaultObj()
{
	static class UVoipListenerSynthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoipListenerSynthComponent*>(UVoipListenerSynthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UVoipListenerSynthComponent::IsIdling(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipListenerSynthComponent", "IsIdling");

	Params::UVoipListenerSynthComponent_IsIdling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// (None)

class UClass* UOnlineEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineEngineInterfaceImpl");

	return Clss;
}


// OnlineEngineInterfaceImpl RedpointEOSUtils.Default__OnlineEngineInterfaceEOS
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineEngineInterfaceImpl* UOnlineEngineInterfaceImpl::GetDefaultObj()
{
	static class UOnlineEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineEngineInterfaceImpl*>(UOnlineEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}

}


