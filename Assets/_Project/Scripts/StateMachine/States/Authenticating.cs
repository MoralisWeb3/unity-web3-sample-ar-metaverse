using System;
using Pixelplacement;

public class Authenticating : State
{
    private void OnEnable()
    {
        //TODO stop plane scanning
    }

    public void ConnectionSuccessful()
    {
        ChangeState("Scanning");
    }
}
