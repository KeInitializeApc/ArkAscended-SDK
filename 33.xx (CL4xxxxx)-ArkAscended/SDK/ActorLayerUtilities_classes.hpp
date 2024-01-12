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

	struct FActorLayer RemoveActorFromLayer();
	TArray<class AActor*> GetActors(const struct FActorLayer& ActorLayer);
	struct FActorLayer AddActorToLayer();
};

}


