using System;
using UnityEngine;

public class ShotBehavior : MonoBehaviour
{
    public static Action TargetHit;
    
    public GameObject collisionExplosion;
    public float speed;
    
    private Vector3 _target;
    
    // Update is called once per frame
    void FixedUpdate()
    {
        float step = speed * Time.deltaTime;

        if (_target != null) //TODO
        {
            if (transform.position == _target)
            {
                TargetHit?.Invoke();
                
                Explode();
                return;
            }
            transform.position = Vector3.MoveTowards(transform.position, _target, step);
        }
    }

    public void SetTarget(Vector3 target)
    {
        _target = target;
    }

    private void Explode()
    {
        if (collisionExplosion  != null) {
            GameObject explosion = Instantiate(
                collisionExplosion, transform.position, transform.rotation);
            Destroy(gameObject);
            Destroy(explosion, 2f);
        }
    }
}