#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2F0 - 0x2F0)
// Class StaticMeshDescription.StaticMeshDescription
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static class UClass* StaticClass();
	static class UStaticMeshDescription* GetDefaultObj();

	int32 SetVertexInstanceUV();
	struct FPolygonGroupID SetPolygonGroupMaterialSlotName(class FName SlotName);
	int32 GetVertexInstanceUV(struct FVector2D* ReturnValue);
	struct FPolygonID CreateCube(struct FVector* HalfExtents);
};

}


