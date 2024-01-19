#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ActorLayerUtilities.LayersBlueprintLibrary
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayersBlueprintLibrary* GetDefaultObj();

	struct FActorLayer RemoveActorFromLayer(class AActor** InActor);
	void GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer, const TArray<class AActor*>& ReturnValue);
	struct FActorLayer AddActorToLayer(class AActor** InActor);
};

}


